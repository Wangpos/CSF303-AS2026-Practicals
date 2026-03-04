#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class Student {
private:

     string name;
     int studentNumber;
     vector<float> marks;
     
     string getClassification() {
          float avg = getAverage();
          if (avg >= 75) return "Distinction";
          else if (avg >= 60) return "Merit";
          else if (avg >= 40) return "Pass";
          else return "Fail";
     }
     
public:

     Student(string studentName, int studentNo) {
          name = studentName;
          studentNumber = studentNo;
     }
     
     void addMark(float m) {
          marks.push_back(m);
     }
     
     float getAverage() {
          if (marks.empty()) return 0.0;
          float sum = 0.0;
          for (float mark : marks) {
               sum += mark;
          }
          return sum / marks.size();
     }
     
     float getHighest() {
          if (marks.empty()) return 0.0;
          return *max_element(marks.begin(), marks.end());
     }
     
     float getLowest() {
          if (marks.empty()) return 0.0;
          return *min_element(marks.begin(), marks.end());
     }
     
     void printReport() {
          cout << "================================================" << endl;
          cout << "           ACADEMIC REPORT" << endl;
          cout << "================================================" << endl;
          cout << "Student Name   : " << name << endl;
          cout << "Student No     : " << studentNumber << endl;
          cout << "Marks Entered  : " << marks.size() << endl;
          
          cout << "Marks          : ";
          for (float mark : marks) {
               cout << fixed << setprecision(0) << mark << " ";
          }
          cout << endl;
          
          cout << fixed << setprecision(2);
          cout << "Average        : " << getAverage() << endl;
          cout << fixed << setprecision(0);
          cout << "Highest        : " << getHighest() << endl;
          cout << "Lowest         : " << getLowest() << endl;
          cout << "Classification : " << getClassification() << endl;
          cout << "================================================" << endl;
     }
};

int main() {
     Student student("Tshering Wangpo Dorji", 2230311);
     
     student.addMark(88);
     student.addMark(76);
     student.addMark(91);
     student.addMark(65);
     student.addMark(83);
     
     student.printReport();
     
     return 0;
}
