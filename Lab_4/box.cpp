// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4A

// Write a program box.cpp that asks the user to input width and height and 
// prints a solid rectangular box of the requested size using asterisks.

// Also, print a line Shape: between user input and the printed shape 
// (to separate input from output).

#include <iostream>
int main() {
  
  int width, height;
  
  std::cout << "Input width: ";
  std::cin >> width;
  std::cout << "Input height: ";
  std::cin >> height;
  
  
  std::cout << "\nShape: " << std::endl;
  
  for (int i = 0; i < height; i++){
      for (int i = 0; i < width; i++){
        std::cout << "*";
      }
      std::cout << std::endl;
  }
}
