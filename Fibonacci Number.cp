#include <iostream>
using namespace std;


int fib (int n);
int main() {
    int num, fibonacchiNum;

    cout << "Please enter a positive integer: ";
    cin >> num;

    fibonacchiNum = fib(num);

    cout << fibonacchiNum;


    return 0;
}
int fib (int n){

    if (n == 0)
        return 0;

    else if (n < 3)
        return 1;

    else
        return fib(n - 1) + fib(n - 2);
}
