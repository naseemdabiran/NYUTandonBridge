#include <iostream>
using namespace std;


// Question 2
/* Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. The
   program should calculate and print the minimum number of coins (quarters, dimes, nickels	and	pennies) that are
   equivalent to the given amount */

const int NICKEL_VAL = 5;    //1 nickel = 5 pennies
const int DIME_VAL = 10;     //1 dime = 10 pennies
const int QUARTER_VAL = 25;  //1 quarter = 25 pennies
const int DOLLAR_VAL = 100;  //1 dollar = 100 pennies


int main() {

    int dollarNum, centNum, totalVal;
    int quarterNum, dimeNum, nickelNum, pennyNum;

    cout << "Please enter your amount in the format of dollars and cents separated by a space: " << endl;
    cin >> dollarNum >> centNum;

    totalVal = (dollarNum * DOLLAR_VAL) + centNum;

    quarterNum = totalVal / QUARTER_VAL;
    totalVal = totalVal % QUARTER_VAL;

    dimeNum = totalVal / DIME_VAL;
    totalVal = totalVal % DIME_VAL;

    nickelNum = totalVal / NICKEL_VAL;

    pennyNum = totalVal % NICKEL_VAL;

    cout << dollarNum << " dollars and " << centNum << " cents are:" << endl;
    cout << quarterNum << " quarters, " << dimeNum << " dimes, " << nickelNum << " nickels and " << pennyNum << " pennies";




    return 0;
}
