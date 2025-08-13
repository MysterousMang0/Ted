#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// loop trough the string and find the pos of the substring if found delete it.
void removeSubstring(string subString, string &mainString){
    size_t subStringPos = string::npos;
    while ((subStringPos = mainString.find(subString)) != string::npos) {       
                                                                                
        mainString.erase(subStringPos, subString.length());                     
    }
}
// loop trough the string and find the pos of the substring if found replace it with the new substring
void replaceSubstring(string &mainString, string subStringToRm, string subStringToRp) {
    size_t subStringPos = string::npos;
    while ((subStringPos = mainString.find(subStringToRm)) != string::npos) {
        mainString.replace(subStringPos, subStringToRm.length(), subStringToRp);
    }
}

int main(int argc, char* argv[]) {

    // check if there are enough arguments
    if (argc < 2){
        cout << "To little arguments" << endl;
    }

    // Remove substring
    if (argc > 3 && string(argv[1]) == "-Rm") {

        string subString_Rm = argv[2];
        string string_Rm = argv[3];
        
        removeSubstring(subString_Rm, string_Rm);

        cout << "New string: " << string_Rm << endl;
        
    }

    // Replace substring
    if (argc > 4 && string(argv[1]) == "-Rp") {
        
        string subStringRm = argv[2];
        string substingRp = argv[3];
        string string_Rp = argv[4];

        replaceSubstring(string_Rp, subStringRm, substingRp);

        cout << "New string: " << string_Rp;

    }

}
