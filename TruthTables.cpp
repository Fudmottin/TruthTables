#include <iostream>
#include <iomanip>

// Compute and print truth tables in hex
int main() {
    int hexDigits[] = {0x0, 0x1, 0x2, 0x3,
                       0x4, 0x5, 0x6, 0x7,
                       0x8, 0x9, 0xa, 0xb,
                       0xc, 0xd, 0xe, 0xf};

    std::cout << "/***************************************************************************\n";
    std::cout << "*                             Tables of Truth                              *\n";
    std::cout << "*                     | = or ^ = xor & = and n = nand                      *\n";
    std::cout << "*                                                                          *\n";
    std::cout << "*  | 0 1 2 3 4 5 6 7 8 9 a b c d e f    ^ 0 1 2 3 4 5 6 7 8 9 a b c d e f  *\n";

    for (int i = 0; i < 0x10; i++) {
        std::cout << "*  " << std::hex << i << " ";
        for (int j = 0; j < 0x10; j++) {
            std::cout << std::hex << (i|j) << " ";
        }
        std::cout << "   "  << std::hex << i << " ";
        for (int j = 0; j < 0x10; j++) {
            std::cout << std::hex << (i^j) << " ";
        }
        std::cout << " *\n";
    }

    std::cout << "*                                                                          *\n";
    std::cout << "*  & 0 1 2 3 4 5 6 7 8 9 a b c d e f    n 0 1 2 3 4 5 6 7 8 9 a b c d e f  *\n";

    for (int i = 0; i < 0x10; i++) {
        std::cout << "*  " << std::hex << i << " ";
        for (int j = 0; j < 0x10; j++) {
            std::cout << std::hex << (i&j) << " ";
        }
        std::cout << "   "  << std::hex << i << " ";
        for (int j = 0; j < 0x10; j++) {
            std::cout << std::hex << (~(i&j)&0xf) << " ";
        }
        std::cout << " *\n";
    }

    std::cout << "*                                                                          *\n";
    std::cout << "***************************************************************************/\n";

    return 0;
}
