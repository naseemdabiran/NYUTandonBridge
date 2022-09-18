/*  Naseem Dabiran (nd1316)
    Exam 1
    Question 12
*/

#include <iostream>
using namespace std;

const int FOOT_TO_IN = 12; //1 foot = 12 inches
const int YARD_TO_IN = 36; // 1 yard = 3 feet = 36 inches

int main() {
    int totDistance, currDistance, dayCount;
    int totDistanceYard, totDistanceFoot, totDistanceInch;
    bool flag;

    flag = false;
    dayCount = 0;
    currDistance = 0;
    totDistance = 0;
    while (flag == false){
        cout << "Enter the number of inches the snail traveled in day #" << dayCount + 1 << ", or type -1 if they reached their destination:" <<endl;
        cin >> currDistance;
        if (currDistance == -1)
            flag = true;
        else{
            totDistance += currDistance;
            dayCount++;
        }
    }

    totDistanceYard = totDistance / YARD_TO_IN;
    totDistance = totDistance % YARD_TO_IN;

    totDistanceFoot = totDistance / FOOT_TO_IN;
    totDistanceInch = totDistance % FOOT_TO_IN;

    cout << "In " << dayCount << " days, the snail travelled " << totDistanceYard << " yards, " << totDistanceFoot << " feet, and " << totDistanceInch << " inches.";

    return 0;
}
