#include <iostream>
using namespace std;

int getValidValue();

int main() {
    int s = getValidValue();
    
    double x = s / 2.0;
    for (int i = 0; i < 10; i++) {
        x = 0.5 * (x + s / x);
    }
    
    cout << "s = " << s << endl;
    cout << "x = " << x << endl;
    
    return 0;
}

int getValidValue() {
    int val;
    while (true) {
        cout << "Enter an integer between 20 and 400: ";
        cin >> val;
        
        if (val < 0) {
            cout << "This program does not handle complex numbers." << endl;
        } else if (val < 20 || val > 400) {
            cout << "The input was out of range." << endl;
        } else {
            return val;
        }
    }
}
