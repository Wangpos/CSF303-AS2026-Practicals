#include <iostream>
using namespace std;

int main() {
     int stdnumber = 2230311;
     
     // Calculate sum of all digits
     int temp = stdnumber;
     int sum = 0;
     while (temp > 0) {
          sum += temp % 10;
          temp /= 10;
     }
     string oddEven = (stdnumber % 2 == 0) ? "Even" : "Odd";
     
     int remainder = stdnumber % 7;
     
     int multiplied = stdnumber * 3;
     
     cout << "Student Number: " << stdnumber << endl;
     cout << "Sum of all digits: " << sum << endl;
     cout << "Odd or Even: " << oddEven << endl;
     cout << "Remainder when divided by 7: " << remainder << endl;
     cout << "Student number multiplied by 3: " << multiplied << endl;

     return 0;
}

// Output
// Student Number: 2230311
// Sum of all digits: 12
// Odd or Even: Odd
// Remainder when divided by 7: 6
// Student number multiplied by 3: 6690933