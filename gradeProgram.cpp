// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: June 3, 2021
// This program has a function that accepts any level as a string and
// returns the mark as a percentage

#include <iostream>

int CalcMark(std::string level) {
    // declare local variable
    int percentage;

    // associate the level with the correct percentage
    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 64;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 54;
    } else if (level == "1-") {
        percentage = 51;
    } else {
        percentage = -1;
    }
    return percentage;
}


int main() {
    // declare local variables
    std::string userLevelString;
    int userLevelInt;

    // get the level from the user
    std::cout << "Enter a level you want converted as a percentage: ";
    std::cin >> userLevelString;

    // call the function to convert level as a percentage
    userLevelInt = CalcMark(userLevelString);

    if (userLevelInt == -1) {
        std::cout << "Error. " << userLevelString << " is not a valid number";
    } else {
        std::cout << "Level " << userLevelString << " has a middle"
                     " percentage of " << userLevelInt << "%" << std::endl;
    }
}
