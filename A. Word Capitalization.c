#include <iostream>
#include <string>

int main() {
    // Read input word
    std::string word;
    std::cin >> word;

    // Capitalize the first letter
    if (!word.empty()) {
        word[0] = std::toupper(word[0]);
    }

    // Output the capitalized word
    std::cout << word << std::endl;

    return 0;
}
