/* 1.2	Write a program that reads 3 integer numbers from the keyboard and shows on the screen their mean value and the difference between each number and the mean value. The dialog with the user must be similar to the following: 
Please, input 3 integer numbers 
A ? 23 
B ? 47 
C ? 30 
mean = 33.333 
A-mean = -10.333 
B-mean = 13.667 
C-mean = -3.333 
Implement different versions of the program: using different types for the variables used to store A, B, C and mean. Interpret the results.*/

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    double mean;

    cout << "A? ";
    cin >> a;
    cout << "B? ";
    cin >> b;
    cout << "C? ";
    cin >> c;

    mean = double (a+b+c)/3;

    cout << mean << endl;
    cout << a-mean << endl;
    cout << b-mean << endl;
    cout << c-mean << endl;
  
    return 0;
}

