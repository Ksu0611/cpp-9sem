#include <iostream>
#include <vector>
#include <cstddef>

const int MAX_START = 100;
std::vector<std::size_t> cache(MAX_START + 1, 0);

std::size_t collatz_length(unsigned long long n) {
    if (n == 1) return 1;
    if (n <= MAX_START && cache[n] != 0) return cache[n];

    std::size_t length;
    if (n % 2 == 0) {
        length = 1 + collatz_length(n / 2);
    } else {
        length = 1 + collatz_length(3 * n + 1);
    }
    if (n <= MAX_START) cache[n] = length;
    return length;
}

int main() {
    std::size_t max_length = 0;
    unsigned int number_with_max_length = 1;

    for (unsigned int i = 1; i <= MAX_START; ++i) {
        std::size_t length = collatz_length(i);
        if (length > max_length) {
            max_length = length;
            number_with_max_length = i;
        }
    }

    std::cout << "Наибольшая длина последовательности Коллатца: " << max_length << std::endl;
    std::cout << "Начальное значение: " << number_with_max_length << std::endl;

    return 0;
}
