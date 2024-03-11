/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Write a program leap.cpp that asks the user to input an integer representing a year number 
(1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian 
calendar, it should print Leap year, otherwise, print Common year.


*/



#include <iostream>

int main()
{
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;
    
    if ((year % 4) != 0){
        std::cout << "Common year";
    }
    else if ((year % 100) != 0){
        std::cout << "Leap year";
    }
    else if ((year % 400) != 0){
        std::cout << "Common year";
    }
    else{
        std::cout << "Leap year";
    }
}

