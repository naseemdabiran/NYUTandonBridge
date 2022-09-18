#include <iostream>
using namespace std;


// Question 4
/* Write a program that reads from the user two positive integers, and prints the result of when we add, subtract
  multiply, divide, div and mod them */

int main() {

    int integer1, integer2;
    int addition, subtraction, multiplication, div, mod;
    double division;

    cout << "Please enter two positive integers, separated by a space: " << endl;
    cin >> integer1 >> integer2;

    addition = integer1 + integer2;
    subtraction = integer1 - integer2;
    multiplication = integer1 * integer2;
    division = double(integer1) / double(integer2);
    div = integer1 / integer2;
    mod = integer1 % integer2; 

    cout << integer1 << " + " << integer2 << " = " << addition << endl;
    cout << integer1 << " - " << integer2 << " = " << subtraction << endl;
    cout << integer1 << " * " << integer2 << " = " << multiplication << endl;
    cout << integer1 << " / " << integer2 << " = " << division << endl;
    cout << integer1 << " div " << integer2 << " = " << div << endl;
    cout << integer1 << " mod " << integer2 << " = " << mod << endl;


    return 0;
}
