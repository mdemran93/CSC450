/*
 * main.cpp
 *
 *  Created on: Nov 1, 2023
 *      Author: Emran
 */


#include <iostream>
#include <string>

int main() {
    for (int i = 0; i < 3; ++i) {
        std::string firstString, secondString;

        std::cout << "Enter your first name : ";
        std::cin >> firstString;

        std::cout << "Enter your last name: ";
        std::cin >> secondString;

        std::string concatenatedString = firstString + secondString;

        std::cout << "Concatenated String: " << concatenatedString << std::endl;
    }

    return 0;
}


