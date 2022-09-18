#include <iostream>
using namespace std;


// Question 1
/* Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the
   monetary	value of the coins in the format of dollars and remaining cents. */

const int NICKEL_VAL = 5;    //1 nickel = 5 pennies
const int DIME_VAL = 10;     //1 dime = 10 pennies
const int QUARTER_VAL = 25;  //1 quarter = 25 pennies
const int DOLLAR_VAL = 100;  //1 dollar = 100 pennies


int main() {

    int quarterNum, dimeNum, nickelNum, pennyNum;
    int dollarAmt, centAmt, totalCoinsAmt;

    cout << "Please enter number of coins:" << endl;

    cout << "# of quarters: ";
    cin >> quarterNum;

    cout << "# of dimes: ";
    cin >> dimeNum;

    cout << "# of nickels: ";
    cin >> nickelNum;

    cout << "# of pennies: ";
    cin >> pennyNum;

    totalCoinsAmt = (quarterNum * QUARTER_VAL) + (dimeNum * DIME_VAL) + (nickelNum * NICKEL_VAL) + pennyNum;

    dollarAmt = totalCoinsAmt / DOLLAR_VAL;
    centAmt = totalCoinsAmt % DOLLAR_VAL;

    cout << "The total is "<< dollarAmt <<" dollars and " << centAmt << " cents."<< endl;



    return 0;
}
