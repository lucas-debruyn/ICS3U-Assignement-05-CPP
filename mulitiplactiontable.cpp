// Copyright (c) 2023 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: January 2023
// This program calculates the average mark

#include <cstdlib>
#include <iostream>

int main() {
    // https://cplusplus.com/forum/beginner/152812/
    for (int counter_one = 0; counter_one <= 9; counter_one++) {
        for (int counter_two = 0; counter_two <= 9; counter_two++)
            std::cout << counter_one << " X " << counter_two << " = "
                    << (counter_one * counter_two) << std::endl;
        std::cout << "" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
