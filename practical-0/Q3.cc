#include <iostream>
using namespace std;

int main () {
     string name = "Tsheirng Wangpo Dorji";
     cout << "Full Name : " << name << endl;
     cout << "Total Length : " << name.length() << endl;
     string upperName = name;
     for (char &c : upperName) {
          c = toupper(c);
     }
     cout << "Uppercase : " << upperName << endl;
     string lowerName = name;

     for (char &c : lowerName) {
          c = tolower(c);
     }
     cout << "Lowercase : " << lowerName << endl;
     string initials = ""; 
     bool newWord = true;
     for (char c : name) {
          if (newWord && isalpha(c)) {
               initials += toupper(c);
               newWord = false;
          } else if (isspace(c)) {
               newWord = true;
          }     }
     cout << "Initials : " << initials << endl;
     int firstNameLength = 0;
     for (char c : name) {
          if (c == ' ') {
               break;
          }
          firstNameLength++;
     }     
     cout << "Length of First Name : " << firstNameLength << endl;   
     return 0;
}