#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for (int lines = n;  lines > 0;  lines--){
        for (int space = 0; space < (n - lines); space++){
            cout << " ";
        }
        for (int stars = 0; stars < (2*lines -1); stars++){
            cout << "*";
        }
        cout << endl;
    }
    for (int lines = 1;  lines <= n;  lines++){
        for (int space = 0; space < (n - lines); space++){
            cout << " ";
        }
        for (int stars = 0; stars < (2*lines -1); stars++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
