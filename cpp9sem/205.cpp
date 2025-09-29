#include <iostream>
#include <iomanip> 

int main() {

    double epsilon;

    std::cout << "Enter epsilon: ";
    std::cin >> epsilon;

    double e = 1.0;      
    double term = 1.0;   
    int n = 1;           

    while (term > epsilon) {
        term = term / n;
        e += term;
        n++;
    }

    std::cout << "e = " << std::fixed << std::setprecision(15) << e << std::endl;

    return 0;
}