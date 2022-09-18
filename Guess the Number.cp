#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TOTAL_GUESSES = 5;

int main() {
    int inputGuess, guessLeft, upperBound, lowerBound, randomVal;
    bool flag;

    lowerBound = 1;
    upperBound = 100;

    srand(time(0));
    randomVal = (rand()% upperBound) + lowerBound;

    flag = false;
    guessLeft = TOTAL_GUESSES;


    cout << "I thought of a number between 1 and 100! try to guess it." << endl;

    while (flag == false){

        cout << "Range: ["<< lowerBound <<", " << upperBound << "], Number of guesses left: " << guessLeft << endl;
        cout << "Your guess: ";
        cin >> inputGuess;
        guessLeft--;

        if (inputGuess == randomVal) {
            cout << "Congrats! You guessed my number in " << TOTAL_GUESSES - guessLeft << " guesses.";
            flag = true;
        }
        else if (inputGuess > randomVal && guessLeft >= 1) {
            cout << "Wrong! My number is smaller." << endl;
            if (upperBound >= inputGuess)
                upperBound = inputGuess - 1;
        }
        else if (inputGuess < randomVal && guessLeft >= 1) {
            cout << "Wrong! My number is bigger." << endl;
            if (lowerBound <= inputGuess)
                lowerBound = inputGuess + 1;
        }
        else{
            cout << "Out of guesses! My number is " << randomVal<< endl;
            flag = true;
        }

    }


    return 0;
}
