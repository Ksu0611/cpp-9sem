#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c;

    const double epsilon = 1e-9;

    std::cout << "enter a, b и c: ";
    std::cin >> a >> b >> c;

    std::cout << std::fixed << std::setprecision(6);

    if (std::abs(a) < epsilon) {
        if (std::abs(b) < epsilon) {
            if (std::abs(c) < epsilon) {
                std::cout << "Infinite solutions" << std::endl;
            } else {
                std::cout << "No solutions" << std::endl;
            }
        } else {
            double x = -c / b;
            std::cout << "Linear equation. One root: x = " << x << std::endl;
        }
    } else {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > epsilon) {
            double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
            std::cout << "Два действительных корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        } else if (std::abs(discriminant) < epsilon) {
            double x = -b / (2 * a);
            std::cout << "One root: x = " << x << std::endl;
        } else {
            std::cout << "No root" << std::endl;
        }
    }

    return 0;
}