#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);
int main() {
    int enteredNum;

    cout << "Please enter a positive integer >= 2: ";
    cin >> enteredNum;

    if (enteredNum < 2)
        cout << "Invalid input";
    else
        printDivisors(enteredNum);

    return 0;
}
void printDivisors(int num){

    for (int i = 1; i <= sqrt(num); i++){
        if (num % i == 0)
            cout << i << "\t";
    }
    for (int j = sqrt(num); j >= 1; j--){
        if (num % j == 0)
            if ((num/j) != j)
                cout << num/j << "\t";
    }
}
