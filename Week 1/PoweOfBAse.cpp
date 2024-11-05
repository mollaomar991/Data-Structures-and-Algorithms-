// Recursive function to calculate the power of a number
#include <iostream> // Including the Input/Output Stream Library

// Recursive function to calculate the power of a number
int power(int b, int e) {
  // Base case: Any number raised to the power of 0 is 1
  if (e == 0)
    return 1;

  // Recursive case: Calculate the power using recursion
  // by multiplying the base with the power of (exponent - 1)
  return b * power(b, e - 1);
}

int main() {
  int b, e; // Declaring variables for base and exponent

  std::cout << "Input the base number: ";
  std::cin >> b; // Taking input for the base number

  std::cout << "Input the exponent: ";
  std::cin >> e; // Taking input for the exponent

  // Calculate the power using recursion
  int result = power(b, e); // Storing the result of the power calculation

  // Display the result
  std::cout << b << " raised to the power of " << e << " is: " << result << std::endl;

  return 0; // Returning 0 to indicate successful execution of the program
}
