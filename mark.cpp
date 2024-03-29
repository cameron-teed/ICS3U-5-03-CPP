// Copyright (c) 2019 Cameron All rights reserved.
//
// Created by: Cameron Teed
// Created on: Nov 2019
// This finds your mark

#include <iostream>
#include <string>
#include <map>

std::string Mark_Finder(std::string level) {
    // This determines the mark

    // variable
    // itereator to go through the map and identify if the input is in there
    std::map<std::string, std::string>::iterator iterator;

    // This map keeps track of the levels associated with the marks
    std::map<std::string, std::string> marks {
                                {"4+", "97.5"},
                                {"4", "90.5"},
                                {"4-", "83"},
                                {"3+", "78"},
                                {"3", "74.5"},
                                {"3-", "71"},
                                {"2+", "68"},
                                {"2", "64.5"},
                                {"2-", "61"},
                                {"1+", "58"},
                                {"1", "54.5"},
                                {"1-", "51"},
                                {"0+", "44.5"},
                                {"0", "34.5"},
                                {"0-", "14.5"} };

    // process
    iterator = marks.find(level);
    if (iterator != marks.end()) {
        return marks.at(level);
    } else {
        return "-1";
    }
}

main() {
    // This is asks for the base and hieght, then it  runs area()

    // variables
    std::string level;
    std::string mark;

    // Welcomes the user
    std::cout << "This program finds your mark." << std::endl;
    std::cin.ignore();

    while (true) {
        // input
        std::cout << "What is the level: " << std::endl;
        std::cin >> level;
        // runs Mark_Finder()
        mark = Mark_Finder(level);
        if (mark == "-1") {
            // output
            std::cout << "\nSorry, you mark could not be determined."
            << std::endl;
            std::cout << "Try again.\n"<< std::endl;
        } else {
            std::cout << "\nYour mark is " << mark << "%" << std::endl;
            break;
        }
    }
}
