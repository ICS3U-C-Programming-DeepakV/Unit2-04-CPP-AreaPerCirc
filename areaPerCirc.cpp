// Copyright (c) 2021 Ms Raffin All rights reserved.
//
// Created by: Ms Raffin
// Date: May 1, 2021
// This program shows the user the price of a pizza.

#include <cmath>
#include <iomanip>
#include <iostream>

float radius;
float area;
float circumference;

int main() {
    std::cout << "Enter Radius is Circle (cm): ";
    std::cin >> radius;

    // Calculate the Circumference and area of circle
    circumference = (M_PI * 2) * radius;
    area = M_PI * pow(radius, 2);

    // Display both circumference and area of a circle back to the user
    std::cout << "Circumference of Circle is " << std::fixed
    << std::setprecision(2)
    << std::setfill('0')
    << circumference << "cm \n";

    std::cout << "Area of Circle is " << std::fixed
    << std::setprecision(2)
    << std::setfill('0')
    << area << "cm²\n ";
}
