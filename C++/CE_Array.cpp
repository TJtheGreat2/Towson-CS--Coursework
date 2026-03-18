#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int original[5] = {5, 9, 1, 3, 4};
int output[5];
// Using sort function to sort array
   sort(original, original + 5);
// Copying sorted array to output
for (int i = 0; i < 5; i++)
       output[i] = original[i];
// Displaying sorted version of array
   cout << "Sorted array is: ";
for (int i = 0; i < 5; i++)
       cout 
<< output[i] << " ";
   cout << endl;
return 0;
}
