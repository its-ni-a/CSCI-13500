/* 
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4B

Write a program checkerboard.cpp that asks the user to input width and 
height and prints a rectangular checkerboard of the requested size using 
asterisks and spaces (alternating). */

#include <iostream>
int main() {
  
  int width, height;
  
  std::cout << "Input width: ";
  std::cin >> width;
  std::cout << "Input height: ";
  std::cin >> height;
  
  
  std::cout << "\nShape: " << std::endl;
  
  for (int row = 0; row < height; row++){
      for (int col = 0; col < width; col++){
          
        if (col % 2 != 0){
            if (row % 2 == 0){
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        if (col % 2 == 0){
            if (row % 2 == 0){
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
          
        
        }
        std::cout << std::endl;
    }
}