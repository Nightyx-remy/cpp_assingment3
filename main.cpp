/**
 * Name: FORJANIC Rémy
 * Student number: 511448
 * Class: ETI1V.IA
 * Description: Assignment 3 - Rational Calculator
 */

#include <iostream>

#include "RationalProcessor.h"

int main() {
    std::cout << "Enter a file name: ";
    std::string path;
    std::cin >> path;

    RationalProcessor processor {path};
    if (!processor.process()) {
        std::cout << "Failed to process file" << std::endl;
        return -1;
    }

    return 0;
}
