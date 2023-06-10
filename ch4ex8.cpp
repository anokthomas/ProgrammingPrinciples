#include <iostream>

int main() {
    int grains = 1;
    int squares = 1;

    while (grains < 1000) {
        grains *= 2;
        squares++;
    }

    std::cout << "To give the inventor at least 1000 grains of rice, " << squares << " squares are required." << std::endl;

    grains = 1;
    squares = 1;

    while (grains < 1000000) {
        grains *= 2;
        squares++;
    }

    std::cout << "To give the inventor at least 1,000,000 grains of rice, " << squares << " squares are required." << std::endl;

    grains = 1;
    squares = 1;

    while (grains < 1000000000) {
        grains *= 2;
        squares++;
    }

    std::cout << "To give the inventor at least 1,000,000,000 grains of rice, " << squares << " squares are required." << std::endl;

    return 0;
}