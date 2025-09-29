#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    char c;
    
    std::cout << "Enter characters\n";

    while (std::cin.get(c)) {
        if (c == '\n' || c == '\r') {
            continue;
        }

        std::cout << "'" << c << "': ";

        switch (c) {
            case 'A'...'Z':
                std::cout << "Uppercase letter\n";
                break;

            case 'a'...'z':
                std::cout << "Lowercase letter\n";
                break;

            case '0'...'9':
                std::cout << "Decimal digit\n";
                break;

            case '!':
            case '"':
            case '#':
            case '$':
            case '%':
            case '&':
            case '\'':
            case '(':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '.':
            case '/':
            case ':':
            case ';':
            case '<':
            case '=':
            case '>':
            case '?':
            case '@':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case '{':
            case '|':
            case '}':
            case '~':
                std::cout << "Punctuation mark\n";
                break;

            default:
                std::cout << "Other symbol\n";
                break;
        }
    }

    return 0;
}