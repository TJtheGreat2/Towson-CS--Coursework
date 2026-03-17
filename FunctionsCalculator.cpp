#include <iostream>
using namespace std;
float add(float num1, float num2) {
return num1 + num2;
}
float subtract(float num1, float num2) {
return num1 - num2;
}
float multiply(float num1, float num2) {
return num1 * num2;
}
float divide(float num1, float num2) {
if (num2 == 0) {
        cout 
<< "Error: Division by zero is not allowed." << endl;
return 0; 
    }
return num1 / num2;
}
int main() {
float num1, num2, answer;
char operation;
    cout << "Enter an expression to calculate: ";
    cin >> num1 >> operation >> num2;
switch (operation) {
case '+':
            answer 
= add(num1, num2);
break;
case '-':
            answer 
break;
case '*':
            answer 
break;
case '/':
            answer 
break;
default:
            cout 
= subtract(num1, num2);
= multiply(num1, num2);
= divide(num1, num2);
<< "Invalid operation." << endl;
return 1;
    }
    cout << num1 << " " << operation << " " << num2 << " = " << answer << endl;
return 0;
}
