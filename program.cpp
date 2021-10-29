// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Oct 2021
// This program calculates the area of a rectangle
// where the user gets to enter the length and width in mm

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int length;
    int width;
    int area;
    // input
    std::cout << "We will calculate the area of a rectangle. " << std::endl;
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;
    // process
    area = length*width;
    // output
    std::cout << "Area is " << (area) << "mm²" << std::endl;
}
