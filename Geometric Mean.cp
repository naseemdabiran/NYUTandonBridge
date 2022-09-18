#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numEnteredA, productA;
    int numEnteredB, productB;
    double seqLen, geoMeanA, geoMeanB, countB;

    //SECTION A

    cout << "Section A" << endl;

    cout << "Please enter the length of the sequence: " ;
    cin >> seqLen;
    productA = 1;
    cout << "Please enter your sequence: " <<endl;
    for (int i = 0; i < seqLen; i++){
        cin >> numEnteredA;
        productA *= numEnteredA;
    }

    geoMeanA = pow(productA, 1 / seqLen);

    cout << "The geometric mean is: " << geoMeanA << endl;


    //SECTION B
    cout << endl;

    cout << "Section B" << endl;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:" << endl;
    productB = 1;
    countB = 0;
    while (numEnteredB != -1){
        cin >> numEnteredB;
        if (numEnteredB == -1)
            break;
        else{
            countB++;
            productB *= numEnteredB;
        }
    }

    geoMeanB = pow(productB, 1 / countB);

    cout << "The geometric mean is: " << geoMeanB << endl;




    return 0;
}
