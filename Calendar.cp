#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool leapYear (int year);
void printYearCalender(int year, int startingDay);

int main() {
   int enteredYear, enteredStartingDay;

   cout << "Please enter a year: ";
   cin >> enteredYear;
   cout << "Please enter the starting day: ";
   cin >> enteredStartingDay;

   printYearCalender(enteredYear, enteredStartingDay);

   return 0;
}
int printMonthCalender(int numOfDays, int startingDay){
    int currentDay, lastDay, counter;

    cout << "Mon\tTue\tWed\tThr\tFri\tSat\t Sun"<< endl;

    counter = 1;
    for (int i = 1; currentDay < numOfDays; i++){
        currentDay = i - startingDay + 1;
        if (currentDay >= 1)
            cout << currentDay;

        if (i % 7 == 0)
            cout << endl;
        else
            cout << "\t";

        counter++;
    }
    lastDay = (counter - 1) % 7;
    return lastDay;
}
bool leapYear (int year){
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
void printYearCalender(int year, int startingDay){
    bool isLeapYear;
    int daysInMonth, lastDay;

    isLeapYear = leapYear(year);

    for (int month = 1; month <= 12; month++){
        if (month == 1){
            cout << "January " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 2){
            cout << "February " << year << endl;
            if (isLeapYear)
                daysInMonth = 29;
            else
                daysInMonth = 28;
        }
        else if (month == 3){
            cout << "March " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 4){
            cout << "April " << year << endl;
            daysInMonth = 30;
        }
        else if (month == 5){
            cout << "May " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 6){
            cout << "June " << year << endl;
            daysInMonth = 30;
        }
        else if (month == 7){
            cout << "July " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 8){
            cout << "August " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 9){
            cout << "September " << year << endl;
            daysInMonth = 30;
        }
        else if (month == 10){
            cout << "October " << year << endl;
            daysInMonth = 31;
        }
        else if (month == 11){
            cout << "November " << year << endl;
            daysInMonth = 30;
        }
        else {
            cout << "December " << year << endl;
            daysInMonth = 31;
        }

        lastDay = printMonthCalender(daysInMonth, startingDay);
        startingDay = lastDay + 1;
        cout << endl << endl ;
    }
}
