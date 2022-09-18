#include <iostream>
using namespace std;

const double LB_TO_KG = 0.453592; //pound to kilogram conversion factor
const double IN_TO_ME = 0.0254; // inch to meter conversion factor

int main() {
    double weightLb, weightKg, heightIn, heightMe;
    double BMI;

    cout << "Please enter weight (in pounds): ";
    cin >> weightLb;
    weightKg = weightLb * LB_TO_KG;

    cout << "Please enter height (in inches): ";
    cin >> heightIn;
    heightMe = heightIn * IN_TO_ME;

    BMI = weightKg / (heightMe * heightMe);

    if (BMI <= 30)
        cout << "The weight status is: Obese"<< endl;
    else if (BMI <= 25)
        cout << "The weight status is: Overweight"<< endl;
    else if (BMI <= 18.5)
        cout << "The weight status is: Normal"<< endl;
    else
        cout << "The weight status is: Underweight"<< endl;

    return 0;
}
