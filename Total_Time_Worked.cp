#include <iostream>
using namespace std;


// Question 3
/* Suppose John and Bill worked for some time and we want to calculate the total time both of them worked. Write a
   program that reads number of days, hours, minutes each of them worked, and prints the total time	both of	them worked
   together as days, hours, minutes. */

const int DAY = 1440;     //1 day = 24 hours = 1440 minutes
const int HOUR = 60;    //1 hour  = 60 minutes


int main() {

    int daysJohn, hrsJohn, minJohn;
    int daysBill, hrsBill, minBill;
    int totalDays, totalHrs, totalMin, totalTime;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohn;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hrsJohn;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minJohn;

    cout << endl;


    cout << "Please enter the number of days John has worked: ";
    cin >> daysBill;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hrsBill;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minBill;

    cout << endl;

    totalTime = ((daysJohn + daysBill) * DAY) + ((hrsJohn + hrsBill)* HOUR) + minJohn + minBill;

    totalDays = totalTime / DAY;
    totalTime = totalTime % DAY;

    totalHrs = totalTime / HOUR;

    totalMin = totalTime % HOUR;

    cout << "The total time both of them worked together is: " << totalDays << " days, "<< totalHrs << " hours and " << totalMin << " minutes." << endl;


    return 0;
}
