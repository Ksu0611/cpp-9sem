#include <iostream>
#include <limits>
#include <cmath>

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Wrong n" << std::endl;
        return 1;
    }

    double* numbers = new double[n];

    std::cout << "Enter " << n << " numbers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    double max_val = numbers[0];
    double min_val = numbers[0];
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] > max_val) max_val = numbers[i];
        if (numbers[i] < min_val) min_val = numbers[i];
        sum += numbers[i];
    }

    double mean = sum / n;

    double variance_sum = 0.0;
    for (int i = 0; i < n; ++i) {
        variance_sum += (numbers[i] - mean) * (numbers[i] - mean);
    }

    double std_dev = std::sqrt(variance_sum / n);

    std::cout << "max: " << max_val << std::endl;
    std::cout << "min: " << min_val << std::endl;
    std::cout << "mean: " << mean << std::endl;
    std::cout << "std: " << std_dev << std::endl;

    delete[] numbers;

    return 0;
}
