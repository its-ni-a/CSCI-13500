/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A


Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main()
{
    
    int yourInteger;
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> yourInteger;
    
    while ((yourInteger >= 100) || (yourInteger <= 0)){
        std::cout << "Please re-enter: " << std::endl;
        std::cin >> yourInteger;
        if ((yourInteger < 100) && (yourInteger > 0)){
            break;
        }
    }
    
    std::cout << "Number squared is "  << (yourInteger * yourInteger);

}
