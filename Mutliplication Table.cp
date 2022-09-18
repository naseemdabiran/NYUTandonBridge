#include <iostream>
using namespace std;
int main() {
    int userInput;

    cout << "Please enter a positive integer: "<< endl;
    cin >> userInput;

    for (int i = 1; i <= userInput; i++){
        for (int j = 1; j <=userInput; j++){
            cout << i * j << "\t";
        }
        cout << endl;
    }


    return 0;
}
