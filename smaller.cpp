/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Find the smaller of two integers. Write a program smaller.cpp that asks the 
user to input two integer numbers and prints out the smaller of the two.

*/



#include <iostream>

int main()
{
    std::cout << "Enter the first number: ";
    int int1;
    std::cin >> int1;

    std::cout << "Enter the second number: ";
    int int2;
    std::cin >> int2;

    if (int1 <= int2){
        std::cout << "The smaller of the two is: " << int1 << std::endl;
    }
    else{
        std::cout << "The smaller of the two is: " << int2 << std::endl;
    }
    return 0;
}