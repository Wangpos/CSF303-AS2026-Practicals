#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int digitSum(int n) {
     int sum = 0;
     while (n > 0) {
          sum += n % 10;
          n /= 10;
     }
     return sum;
}


bool isPrime(int n) {
     if (n <= 1) return false;
     if (n <= 3) return true;
     if (n % 2 == 0 || n % 3 == 0) return false;
     
     for (int i = 5; i * i <= n; i += 6) {
          if (n % i == 0 || n % (i + 2) == 0)
               return false;
     }
     return true;
}

int countVowels(string s) {
     int count = 0;
     for (char c : s) {
          char lower = tolower(c);
          if (lower == 'a' || lower == 'e' || lower == 'i' || 
              lower == 'o' || lower == 'u') {
               count++;
          }
     }
     return count;
}

string reverseString(string s) {
     string reversed = "";
     for (int i = s.length() - 1; i >= 0; i--) {
          reversed += s[i];
     }
     return reversed;
}

int main() {

     string name = "Tshering Wangpo Dorji";
     int studentNumber = 2230311;
     
     int sumOfDigits = digitSum(studentNumber);
     bool primeStatus = isPrime(studentNumber);
     int vowelCount = countVowels(name);
     string reversedName = reverseString(name);
     
     cout << "========================================" << endl;
     cout << "Function Results for " << name << endl;
     cout << "Student No: " << studentNumber << endl;
     cout << "========================================" << endl;
     cout << "digitSum(" << studentNumber << ")          : " << sumOfDigits << endl;
     cout << "isPrime(" << studentNumber << ")           : " << (primeStatus ? "Yes" : "No") << endl;
     cout << "countVowels(" << name << ")   : " << vowelCount << endl;
     cout << "reverseString(" << name << "): " << reversedName << endl;
     cout << "========================================" << endl;
     
     return 0;
}
