//recursive algorithm is an algorithm where a function calls itself repeatedly until a stopping condition is met.

//Example using factorial:

//Factorial formula:
//n!=n×(n−1)!

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << factorial(5);
}
