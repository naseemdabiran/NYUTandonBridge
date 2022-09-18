#include <iostream>
#include <string>
using namespace std;


int main() {
    string name;
    int currentYear, graduationYear ;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;
    cout << "Please enter current year: ";
    cin >> currentYear;


    if (graduationYear - currentYear > 4)
        cout << name << ", you are not in college yet." << endl;
    else if (graduationYear - currentYear == 4)
        cout << name << ", you are a freshman." << endl;
    else if (graduationYear - currentYear == 3)
        cout << name << ", you are a sophmore." << endl;
    else if (graduationYear - currentYear == 2)
        cout << name << ", you are a junior." << endl;
    else if (graduationYear - currentYear == 1)
        cout << name << ", you are a senior." << endl;
    else
        cout << name << ", you have graduated." << endl;

    return 0;
}
