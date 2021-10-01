// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program multiplies each whole number that goes up to the users number

#include <iostream>

int main() {
    // This function multiplies each whole number
    // that goes up to the users number

    int integer_a_i;
    int counter = 1;
    int the_product = 1;
    std::string integer_a_s;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> integer_a_s;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        integer_a_i = std::stoi(integer_a_s);

        do {
            the_product = the_product * counter;
            counter = counter + 1;
        }
        while (counter <= integer_a_i);
        std::cout << "The product of all positive numbers from 1 to "
        << integer_a_s << " is " << the_product << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
            }

    std::cout << ("\nDone.") << std::endl;
}
