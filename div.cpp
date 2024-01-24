#include <iostream>

int main() {
    // Declare variables to store the dividend and divisor
    double dividend, divisor;

    // Prompt the user to enter the dividend
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    // Prompt the user to enter the divisor
    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    // Check if the divisor is not zero to avoid division by zero
    if (divisor != 0) {
        // Calculate the result of the division
        double result = dividend / divisor;

        // Display the result
        std::cout << "The result of " << dividend << " / " << divisor << " is: " << result << std::endl;
    } else {
        // If the divisor is zero, display an error message
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}
