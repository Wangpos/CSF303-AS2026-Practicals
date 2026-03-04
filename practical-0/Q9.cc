#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
     vector<int> v2230311;
     
     cout << "Enter 6 values: ";
     for (int i = 0; i < 6; i++) {
          int value;
          cin >> value;
          v2230311.push_back(value);
     }
     
     cout << "Original       : ";
     for (int val : v2230311) {
          cout << val << " ";
     }
     cout << endl;
     
     sort(v2230311.begin(), v2230311.end());
     
     cout << "Sorted         : ";
     for (int val : v2230311) {
          cout << val << " ";
     }
     cout << endl;
     
     int minVal = *min_element(v2230311.begin(), v2230311.end());
     cout << "Min            : " << minVal << endl;

     int maxVal = *max_element(v2230311.begin(), v2230311.end());
     cout << "Max            : " << maxVal << endl;
     
     int sum = accumulate(v2230311.begin(), v2230311.end(), 0);
     cout << "Sum            : " << sum << endl;
     
     double average = (double)sum / v2230311.size();
     cout << fixed << setprecision(2);
     cout << "Average        : " << average << endl;
     
     v2230311.erase(
          remove_if(v2230311.begin(), v2230311.end(), 
                    [average](int val) { return val < average; }),
          v2230311.end()
     );
     
     cout << "After removing below average:" << endl;
     for (int val : v2230311) {
          cout << val << " ";
     }
     cout << endl;
     
     return 0;
}
