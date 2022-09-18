#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double a, b, c, discriminant, x1, x2;


    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c);

    if (a == 0 && b == 0 && c == 0)
        cout << "This equation has infinite number of solutions" << endl;
    else if (a == 0)
        cout << "This equation has no solution" << endl;
    else if (discriminant < 0)
        cout << "This equation has no real solution" << endl;
    else if (discriminant == 0){
        x1 = -b  / (2 * a);
        cout << "This equation has one real solution: x = " << x1 << endl;
    }
    else{
        x1 = (-b + discriminant ) / (2 * a);
        x2 = (-b - discriminant ) / (2 * a);
        cout << "This equation has two real solutions: x = " << x1 << ", x = " << x2 << endl;
    }

    return 0;
}
