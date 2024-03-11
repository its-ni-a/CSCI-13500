/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Find the smaller of three integers. Write a program smaller3.cpp that asks the 
user to input three integer numbers and prints out the smaller of the three.

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

    std::cout << "Enter the third number: ";
    int int3;
    std::cin >> int3;


    int smaller_int = 1; //assign first int as smaller_int

    if (int2 <= int1){
        if (int3 <= int2){
            std::cout << "The smaller of the three is: " << int3 << std::endl;
        }
        else{
            std::cout << "The smaller of the three is: " << int2 << std::endl;
        }
    }
    else if (int3 <= int1){
        if (int2 <= int3){
            std::cout << "The smaller of the three is: " << int2 << std::endl;
        }
        else{
            std::cout << "The smaller of the three is: " << int3 << std::endl;
        }
    }
    else{
        std::cout << "The smaller of the three is: " << int1 << std::endl;
    }
    return 0;
}

