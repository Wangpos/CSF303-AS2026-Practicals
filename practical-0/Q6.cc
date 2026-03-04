#include <iostream>
#include <string>
using namespace std;

int main() {

     string firstName = "Tshering";
     string fullName = "Tshering Wangpo Dorji";
     int studentNumber = 2230311;
     
     int firstNameLength = firstName.length();
     cout << "Name repeated (" << firstNameLength << " times):" << endl;
     for (int i = 0; i < firstNameLength; i++) {
          cout << firstName << endl;
     }
     

     int fullNameLength = fullName.length();
     cout << "\nTriangle (height = " << fullNameLength << "):" << endl;
     for (int i = 1; i <= fullNameLength; i++) {
          for (int j = 0; j < i; j++) {
               cout << "*";
          }
          cout << endl;
     }
     
     int lastDigit = studentNumber % 10;
     cout << "\nTimes Table for " << lastDigit << " (last digit of " << studentNumber << "):" << endl;
     for (int i = 1; i <= 10; i++) {
          cout << lastDigit << " x " << i << " = " << (lastDigit * i) << endl;
     }
     
     return 0;
}
