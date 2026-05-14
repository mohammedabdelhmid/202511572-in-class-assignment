//yes, a void function can take a parameter.
//A void function does not return a value, but it can receive data through parameters.
// EXAMPLE
#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello " << name;
}

int main() {
    greet("Ali");
}
