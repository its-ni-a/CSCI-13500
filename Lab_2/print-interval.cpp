/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Write a program print-interval.cpp that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), and print out all integers 
in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, 
but exclude the upper limit.

*/

#include <iostream>

int main()
{
    // lower limit
    int L;
    std::cout << "Enter L: ";
    std::cin >> L ;
    
    // upper limit
    int U;
    std::cout << "Enter U: ";
    std::cin >> U;
    
    
    int i = L;
    
    // for increasing
        while (i < U) {
            std::cout << L << " ";
            L = L + 1;
            
            if (L >= U){
            break;
            }
        }
    
    // for decreasing
        while (i > U) {
            std::cout << L << " ";
            L = L - 1;
            
            if (L <= U){
            break;
            }
        }

}
