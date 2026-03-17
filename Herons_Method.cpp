#include <iostream>
using namespace std;
int main() {
int s;
  cout << "Enter a number between 20 and 400: """ << endl;
  cin >> s;
  cout << s << endl;
if (s < 20) {
    cout << " The number you entered is out of range [20,400]" << endl;
return 0;
  }
if (s > 400) {
    cout << " The number you entered is out of range [20,400]" << endl;
return 0;
  }
double x0 = s / 2;
double x1 = (x0 + (s / x0)) / 2;
double x2 = (x1 + (s / x1)) / 2;
double x3 = (x2 + (s / x2)) / 2;
double x4 = (x3 + (s / x3)) / 2;
double x5 = (x4 + (s / x4)) / 2;
double x6 = (x5 + (s / x5)) / 2;
double x7 = (x6 + (s / x6)) / 2;
double x8 = (x7 + (s / x7)) / 2;
double x9 = (x8 + (s / x8)) / 2;
  cout << x0 << endl
<< x1 << endl
<< x2 << endl
<< x3 << endl
<< x4 << endl
<< x5 << endl
<< x6 << endl
<< x7 << endl
<< x8 << endl
<< x9 << endl;
  cout << "The square root of " << s << " is " << x9 << "." << endl;
return 0;
}
