#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberEntered, binaryNum, deciNum, power;

    cout << "Enter decimal number: "<< endl;
    cin >> numberEntered;

    deciNum = numberEntered;
    binaryNum = 0;
    power = 1;
    while (deciNum !=0){
        binaryNum = binaryNum + ((deciNum % 2) * power);
        power *= 10;
        deciNum /= 2;
    }
    cout << "The binary representation of " << numberEntered << " is "<< binaryNum;


    return 0;
}
