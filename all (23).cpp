#include <iostream>
using namespace std;

  // print factorial using for loop
int main() {
    int n;
    int factorial = 1; 
    
    cin >> n;

    // Check for negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i
        }

        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
