// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program converts a temperature from celcius to farenheit

#include <iostream>

void CalculateFarenheit() {
    // calculate farenheit

    std::string cTempAsString;
    float cTemp;
    float fTemp;

    // input
    std::cout << "Enter a temperature (°C) : ";
    std::cin >> cTempAsString;

    // process
    try {
        cTemp = std::stof(cTempAsString);
        fTemp = (cTemp * 9/5) + 32;

    // output
        std::cout << "" << cTemp << "°C is equal to " "" << fTemp << "°F"
        << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number entered, please try again." << std::endl;
    }
}

int main() {
    // this function just calls other functions

    // call functions
    CalculateFarenheit();
    std::cout << "\nDone." << std::endl;
}
