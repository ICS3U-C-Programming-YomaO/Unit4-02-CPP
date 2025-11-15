// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program checks if package can be accepter or not
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    size_t pos;
    // initialize
    std::string userInput;
    int userNum;

    // Ask for input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userInput;

    // Try to convert to integer
    try {
        userNum = std::stoi(userInput, &pos);

        // if user inputs a decimal
        if (userInput.length() != pos) {
            std::cout << userInput << " is not a valid integer.";
        } else {
            // if user doesn't input a positive integer
            if (userNum < 0) {
                std::cout << "Please enter a positive integer." << std::endl;
            } else {
                int counter = 0;
                int factorialAnswer = 1;

                // Loop to calculate factorial
                while (true) {
                    counter = counter + 1;
                    factorialAnswer = factorialAnswer * counter;

                    if (counter >= userNum) {
                        break;
                    }
                }

                std::cout << "The factorial of " << userNum
                          << " is " << factorialAnswer << std::endl;
            }
        }
    }catch (...) {
            // exception handling
            std::cout << userInput << " is not an integer." << std::endl;
        }
    // End program message
    std::cout << "Thanks for playing!" << std::endl;
}

