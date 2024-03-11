/* 
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4C

Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension. */

#include <iostream>
int main() {
  
  int size;
  
  std::cout << "Input size: ";
  std::cin >> size;
  
  
  std::cout << "\nShape: " << std::endl;
  
  for (int row = 0; row < size; row++){
        for (int col = 0; col < size; col++){
            
            if((row == col) || (col == (size - row - 1))){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
            
        }
        std::cout << std::endl;
    }
}