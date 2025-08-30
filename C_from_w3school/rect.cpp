#include <iostream>

int main() {
    int width = 10;
    int height = 5;

    // Draw the top side of the rectangle
    for (int i = 0; i < width; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Draw the sides of the rectangle
    for (int i = 0; i < height - 2; ++i) {
        std::cout << "*";
        for (int j = 0; j < width - 2; ++j) {
            std::cout << "  ";
        }
        std::cout << " *" << std::endl;
    }

    // Draw the bottom side of the rectangle
    for (int i = 0; i < width; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    return 0;
}
