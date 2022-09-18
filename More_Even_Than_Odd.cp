#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberEntered, oddCount, evenCount, counter;


    cout << "Please enter a positive integer: ";
    cin >> numberEntered;

    for (int i = 1; i <= numberEntered; i++){

        counter = i;
        evenCount = 0;
        oddCount = 0;

        while (counter > 0){

            if (counter % 2 == 0)
                evenCount++;
            else
                oddCount++;

            counter /= 10;
        }

        if (evenCount > oddCount)
            cout << i << endl;
    }


    return 0;
}
