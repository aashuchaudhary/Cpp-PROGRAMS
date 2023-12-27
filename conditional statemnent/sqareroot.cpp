

// #include <iostream>
// #include <cmath>

// // Custom function to calculate the square root
// double calculateSquareRoot(double number) {
//     if (number < 0) {
//         // Handling negative numbers (not a real number)
//         return NAN; // NAN (Not-a-Number) is a special floating-point value
//     }
//     return sqrt(number);
// }

// int main() {
//     double number = 16.0; // Replace with the number for which you want to find the square root
//     double result = calculateSquareRoot(number);

//     if (std::isnan(result)) {
//         std::cout << "The square root is not a real number (NaN)." << std::endl;
//     } else {
//         std::cout << "The square root of " << number << " is " << result << std::endl;
//     }

//     return 0;
// }




#include <iostream>
#include <cmath>

// Custom function to calculate the square root
double calculateSquareRoot(double number) {
    if (number < 0) {
        // Handling negative numbers (not a real number)
        return NAN; // NAN (Not-a-Number) is a special floating-point value
    }
    return sqrt(number);
}

int main() {
    double number = 16.0; // Replace with the number for which you want to find the square root
    double result = calculateSquareRoot(number);

    if (std::isnan(result)) {
        std::cout << "The square root is not a real number (NaN)." << std::endl;
    } else {
        std::cout << "The square root of " << number << " is " << result << std::endl;
    }

    return 0;
}
