/******************************************************
 * C++ Calculator Program
 * Developed by: Mohammed Al-Qurashi
 * Date: 2023
 * Description: Simple calculator that performs basic 
 *              arithmetic operations (+, -, *, /)
 ******************************************************/

#include <iostream>  // Include input/output stream library
using namespace std; // Use standard namespace

int main() {
    // Display program header
    cout << "******** CALCULATOR ********\n";
    cout << "   Developed by: Mohammed Al-Qurashi\n\n";
    
    // Variable declaration
    char op;          // Operator (+, -, *, /)
    float num1, num2; // Input numbers
    
    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Perform calculation based on operator
    switch (op) {
        case '+': 
            cout << "\nResult: " << num1 << " + " << num2 << " = " << num1 + num2;
            break;
            
        case '-': 
            cout << "\nResult: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
            
        case '*': 
            cout << "\nResult: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
            
        case '/': 
            if (num2 == 0) {
                cout << "\nError: Division by zero is not allowed!";
            } else {
                cout << "\nResult: " << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;
            
        default:
            cout << "\nError: Invalid operator!";
    }
    
    // Display program footer with developer name
    cout << "\n\n****************************";
    cout << "\nDeveloper: Mohammed Al-Qurashi\n";
    
    return 0;  // End program
}