#include <iostream>
using namespace std;

int main() {
    int numEnteredA, numEnteredB;
    int counterA, counterB;

    //SECTION A

    cout << "Section A" << endl;

    cout << "Please enter a positive integer: ";
    cin >> numEnteredA;

    counterA = 0;

    while (counterA < numEnteredA){
        counterA++;
        cout << 2 * counterA << endl;
    }


    //SECTION B
    cout << endl;

    cout << "Section B" << endl;

    cout << "Please enter a positive integer: ";
    cin >> numEnteredB;

    for (counterB = 1; counterB <= numEnteredB; counterB++){
        cout << 2 * counterB << endl;
    }



    return 0;
}
