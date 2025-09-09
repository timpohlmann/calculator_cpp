#include <iostream>
using namespace std;

int main() {
    int num1, num2;  // declare variables for user
    cout << "Enter the first whole number";
    cin >> num1;

    cout << "Enter the second whole number";
    cin >> num2;

    //perform calculations
    int sum = num1 +num2;
    int difference = num1-num2;
    int product = num1 * num2;      // declaring variables which are result of the computation based on the numbers
    int quotient = num1/num2;

    cout << "\nResults:\n";
    //skipping lines for better formatting
    cout << "Sum =" << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    //to deal with special cases of division
    if (num2 != 0) {
        double quotient = static_cast<double>(num1) / num2;
        cout << "Quotient = " << quotient << endl;  // this section says if number 2 is not zero
        // that this deals with decimals
    }else {
        cout << "Quotient = Undefined(division by zero)" << endl; // if num2 is zero result is undefined because x/0 is undef
    }
    return 0;// end of program
}
