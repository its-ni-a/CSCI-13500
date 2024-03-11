/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Prints the fibonnaci sequence.

Once the program gets to the 2 billion a code phemenomon starts to print intgers with negatives

*/


#include <iostream>

int main(){
    
    int fib[60];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }  
    
    for (int i = 0; i < 60; i++)
    {
        std::cout << fib[i] << std::endl;
    } 

    return 0;
    
}