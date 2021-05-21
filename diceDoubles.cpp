// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program runs a dice game program

#include <iostream>
#include <random>

main() {
    // this function runs the "Dice Game" program
    int randomRoll1;
    int randomRoll2;
    int loopCounter = 0;

    std::cout << "Let's roll some dice!" << std::endl;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 6);
    randomRoll1 = idist(rgen);
    randomRoll2 = idist(rgen);

    while (randomRoll1 && randomRoll2 < 7) {
        loopCounter += 1;
        if (randomRoll1 == randomRoll2) {
            break;
        }
    }
    // output
    std::cout << "You got a double! "<< randomRoll1 << "," << randomRoll2 << std::endl;
    std::cout << "\nIt took you "<< loopCounter << " rolls!" << std::endl;
    std::cout << "\nThanks for playing!" << std::endl;
}
