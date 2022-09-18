#include <iostream>
using namespace std;


double eApprox (int n);
int main() {
    cout.precision(30);

    for (int n = 1; n <= 15; n++){
        cout << "n = " << n <<"\t" << eApprox(n) <<endl;
    }

    return 0;
}
double eApprox (int n){
    double e = 1.0;
    double factorial = 1.0;
    for (int j = 1; j<= n; j++){
        factorial *= j;
        e += (1/factorial);
    }
    return e;
}
