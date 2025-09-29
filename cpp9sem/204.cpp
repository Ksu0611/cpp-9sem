#include <iostream>

int main() {
    std::cout << "Three-digit Armstrong numbers are:\n";

    for (int hundreds = 1; hundreds <= 9; ++hundreds) {
        for (int tens = 0; tens <= 9; ++tens) {
            for (int units = 0; units <= 9; ++units) {
                int number = hundreds * 100 + tens * 10 + units;

                int sumOfCubes = (hundreds * hundreds * hundreds) + 
                                 (tens * tens * tens) + 
                                 (units * units * units);

                if (number == sumOfCubes) {
                    std::cout << number << std::endl;
                }
            }
        }
    }

    return 0;
}