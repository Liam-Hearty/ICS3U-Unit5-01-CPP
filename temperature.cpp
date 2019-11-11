// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program changes degrees celcius to farenheit.


#include <iostream>

    std::string temp_c_as_string;
    int temp_c = 0;
    int temp_f = 0;

int calculate_f() {
    try {
        std::cout << "Enter a temperature in degrees celcius: " << std::endl;
        std::cin >> temp_c_as_string;
        temp_c = std::stoi(temp_c_as_string);
        temp_f = 1.8 * temp_c + 32;
        std::cout << "The temperature of " << temp_c << "c is equal to "
        << temp_f << "f" << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "That was not a valid number." << std::endl;
}}
int main() {
    // This program is main

    calculate_f();
}
