#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberEntered, rem;
    string romanNumeral = " ";

    cout << "Enter decimal number: " << endl;
    cin >> numberEntered;

    rem = numberEntered;
    while(rem != 0){
        if (rem >= 1000){
            romanNumeral += "M";
            rem -= 1000;
        }
        else if (rem >= 500){
            romanNumeral += "D";
            rem -= 500;
        }
        else if (rem >= 100){
            romanNumeral += "C";
            rem -= 100;
        }
        else if (rem >= 50){
            romanNumeral += "L";
            rem -= 50;
        }
        else if (rem >= 10){
            romanNumeral += "X";
            rem -= 10;
        }
        else if (rem >= 5){
            romanNumeral += "V";
            rem -= 5;
        }
        else {
            romanNumeral += "I";
            rem -= 1;
        }
    }

    cout << numberEntered << " is " << romanNumeral << endl;


    return 0;
}
