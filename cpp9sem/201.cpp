#include <iostream>
#include <cmath>   

int main() {
    int N;
    std::cin >> N;

    // Константы для формулы Бине
    // x2−x−1=0
    //F0​=0,F1​=1,Fn​=Fn−1​+Fn−2​.
    
    const double sqrt5 = std::sqrt(5.0);
    const double phi   = (1.0 + sqrt5) / 2.0;  
    const double psi   = (1.0 - sqrt5) / 2.0;  

    // Формула Бине: F(n) = (phi^n - psi^n) / sqrt(5)
    double result = (std::pow(phi, N) - std::pow(psi, N)) / sqrt5;

    
    int fibonacci = static_cast<int>(std::round(result));

    std::cout << fibonacci << std::endl;

    return 0;
}
