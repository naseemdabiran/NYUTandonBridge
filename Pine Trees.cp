#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
int main() {
    int linesShiftedTriangle, spacesShiftedTriangle;
    int trianglesPineTree;
    char shiftedTriangleSymbol, pineTreeSymbol;

    cout << "Enter the number of lines for the triangle (positive integer): ";
    cin >> linesShiftedTriangle;

    cout << "Enter the number of spaces to the left: ";
    cin >> spacesShiftedTriangle;

    cout << "Enter the character to use (e.g. '*', '+', '$'): ";
    cin >> shiftedTriangleSymbol;

    printShiftedTriangle(linesShiftedTriangle, spacesShiftedTriangle, shiftedTriangleSymbol);

    cout << "\n \n";

    cout << "Enter the number of triangles (positive integer): ";
    cin >> trianglesPineTree;

    cout << "Enter the character to use (e.g. '*', '+', '$'): ";
    cin >> pineTreeSymbol;

    printPineTree(trianglesPineTree,  pineTreeSymbol);


    return 0;
}
void printShiftedTriangle(int n, int m, char symbol){
    for (int lines = 1; lines <= n; lines++){
        for (int space = 0; space < (n -lines + m); space++)
            cout << " ";
        for (int shape = 0; shape < (2*lines - 1); shape++)
            cout << symbol;
        cout << endl;
    }
}
void printPineTree(int n, char symbol){
    for (int i = 1; i <= n ; i++){
        printShiftedTriangle(i + 1, n - i, symbol);
    }
}
