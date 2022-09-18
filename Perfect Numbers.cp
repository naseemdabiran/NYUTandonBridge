#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int &outCountDivs, int &outSumDivs);
bool isPerfect(int num);

int main() {
    int enteredNum;
    int countDiv1, countDiv2, sumDiv1, sumDiv2;

    cout << "Please enter a number >= 2: ";
    cin >> enteredNum;

    cout << endl;
    cout << "List of perfect numbers between 2 and " << enteredNum <<": " << endl;
    for (int i = 2; i <= enteredNum; i++){
        if (isPerfect(i))
            cout << i << endl;
    }

    cout << endl;
    cout << "List of pairs of amicable numbers between 2 and " << enteredNum << ": "<< endl;
    for (int j = 2; j <= enteredNum; j++){
        analyzeDividors(j, countDiv1, sumDiv1);
        analyzeDividors(sumDiv1, countDiv2, sumDiv2);
        if (j == sumDiv2 && sumDiv2 < sumDiv1 && sumDiv1 <= enteredNum)
            cout << j << ", "<< sumDiv1 << endl;
    }


    return 0;
}

void analyzeDividors(int num, int &outCountDivs, int &outSumDivs){
    int sumDiv = 1;
    int countDiv = 1;

    for (int i = 2; i<= sqrt(num); i++){
        if (num % i == 0){
            if (i == num / i){ //if num is a perfect square
                countDiv ++;
                sumDiv += i;
            }
            else{
                countDiv += 2;
                sumDiv = sumDiv + i + (num / i);
            }
        }
    }

    outCountDivs = countDiv;
    outSumDivs = sumDiv;
}
bool isPerfect(int num){
    int sumDiv = 0;
    int countDiv = 0;

    analyzeDividors(num, countDiv, sumDiv);

    return (sumDiv == num);
}

