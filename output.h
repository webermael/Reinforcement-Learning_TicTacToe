#include <iostream>
#include <map>
#include "Field.h"

std::map<value_option, char> out = {
    { empty, ' ' },
    { cross, 'X' },
    { circle, 'O' }
};

void drawBoard(Field board[3][3]) {
    std::cout << "  0   1   2" << std::endl;
    for (int y = 0; y < 3; y++) {
        std::cout << y;
        for (int x = 0; x < 3; x++) {
            std::cout << " " << out[board[x][y].getValue()];
            if (x < 2) {
                std::cout << " |";
            }
        }
        std::cout << std::endl;
        if (y < 2) {
            std::cout << " ---|---|---" << std::endl;
        }
    }
    std::cout << std::endl;
}