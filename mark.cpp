// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program can tell the user their school mark as a %

#include <iostream>
#include <string>

int Calculate(char mark[]) {
    // This function calculates the user's mark as a %

    // Variables
    int percentage;

    // Process
    switch (mark[0]) {
        case '4' :
            if (mark[1] == '+') {
                percentage = 95;
            } else if (mark[1] == '-') {
                percentage = 80;
            } else {
                percentage = 87;
            }
            break;
        case '3' :
            if (mark[1] == '+') {
                percentage = 77;
            } else if (mark[1] == '-') {
                percentage = 70;
            } else {
                percentage = 73;
            }
            break;
        case '2' :
            if (mark[1] == '+') {
                percentage = 67;
            } else if (mark[1] == '-') {
                percentage = 60;
            } else {
                percentage = 63;
            }
            break;
        case '1' :
            if (mark[1] == '+') {
                percentage = 57;
            } else if (mark[1] == '-') {
                percentage = 50;
            } else {
                percentage = 53;
            }
            break;
        case 'R' :
            percentage = 30;
            break;
        default :
            percentage = -1;
    }
    return percentage;
}

int main() {
    // This function allows the user to input a mark and receive an outputted %

    // Variables
    char userMark[10] = "         ";
    int userPercentage;

    // Input
    std::cout << "Enter your mark here:" << std::endl;
    std::cin >> userMark;

    // Process
    if (userMark[1] != '+' && userMark[1] != '-' && userMark[1] != 0) {
        userPercentage = -1;
    } else {
        userPercentage = Calculate(userMark);
    }

    // Output
    if (userPercentage == -1) {
        std::cout << "Error, invalid mark entered" << std::endl;
    } else {
        std::cout << "Your mark is " << userPercentage << "%" << std::endl;
    }
}
