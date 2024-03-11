/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user
 with an interface to edit any of its elements.
*/

#include <iostream>

int main() 
{
    // make array
    int myData[10];
    for (int i = 0; i < 10; i++)
{
    myData[i] = 1;
}
// Ask the user to input the cell index i, and its new value v.
int i; // index
int v; // new value

// prints array
do {
    std::cout << "The current array is: ";
    for (int i = 0; i < 10; i++){
        std::cout << myData[i] << " " ;
    }
std::cout << std::endl << "Input index: ";
std::cin >> i;
std::cout << "Input value: ";
std::cin >> v;

// If the index i is within the array update and repeat
    if (i>=0 && i < 10){
        myData[i] = v;
    }
    else {
        std::cout << "Invalid input, exiting loop.";
    }

} while (i>=0 && i < 10);

return 0;
}