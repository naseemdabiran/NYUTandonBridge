/*  Naseem Dabiran (nd1316)
    Exam 1
    Question 11
*/

#include <iostream>
using namespace std;

int main() {
    char inLetter, letter, upperCase;
    int rows, offsetToCapital;

    cout << "Please enter a lower-case letter: " << endl;
    cin >> inLetter;

    rows = (int)(inLetter - 'a') + 1;
    offsetToCapital = (int)('A' - 'a');

    letter = 'a'; //initialize

    for (int lines = 1; lines <= rows; lines++){
        for (int space = 0; space < rows - lines; space++){
            cout << " ";
        }
        for (int letterCount = 1; letterCount <= (2*lines -1); letterCount++){
            if (lines %2 == 1){
                cout << letter;
            }
            else {
                upperCase = (char)(letter + offsetToCapital);
                cout << upperCase;
            }
        }
        letter++;
        cout << endl;
    }

    return 0;
}
