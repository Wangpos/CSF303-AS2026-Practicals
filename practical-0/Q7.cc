#include <iostream>
#include <iomanip>
using namespace std;

int main() {

     string name = "Tshering Wangpo Dorji";
     int studentNumber = 2230311;
     

     int tshering_marks[5] = {85, 72, 90, 65, 78};
     int arraySize = 5;
     

     cout << "Student: " << name << " | No: " << studentNumber << endl;
     cout << "------------------------------------------" << endl;
     cout << "Index  Mark   Bar" << endl;
     

     int highest = tshering_marks[0];
     int lowest = tshering_marks[0];
     int sum = 0;
     

     for (int i = 0; i < arraySize; i++) {
          int mark = tshering_marks[i];
          sum += mark;
          

          if (mark > highest) highest = mark;
          if (mark < lowest) lowest = mark;
          

          cout << "[" << i << "]    " << mark << "     ";
          

          int bars = mark / 10;
          for (int j = 0; j < bars; j++) {
               cout << "*";
          }
          cout << endl;
     }
     

     double average = (double)sum / arraySize;
     

     int aboveAverage = 0;
     for (int i = 0; i < arraySize; i++) {
          if (tshering_marks[i] > average) {
               aboveAverage++;
          }
     }
     
     cout << "------------------------------------------" << endl;
     cout << "Highest       : " << highest << endl;
     cout << "Lowest        : " << lowest << endl;
     cout << fixed << setprecision(2);
     cout << "Average       : " << average << endl;
     cout << "Above Average : " << aboveAverage << " mark(s)" << endl;
     
     return 0;
}
