/* 
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4F

Write a program trapezoid.cpp that prints an upside-down trapezoid of given
width and height.

However, if the input height is impossibly large for the given width, then 
the program should report, Impossible shape! */

#include <iostream>
int main() {
  
  int width, height;
  
  
  std::cout << "Input width: ";
  std::cin >> width;
  std::cout << "Input height: ";
  std::cin >> height;
  
  int spaces = 0;
  int stars = width;
  
  if (((width - height)+1) < height){
        std::cout << "\nImpossible shape!";
    }
else {
  std::cout << "\nShape: " << std::endl;
  
  for (int row = 0; row < height; row++){
        for (int col = 0; col < spaces; col++){              
            std::cout << " ";
        }
        for (int col = 0; col < stars; col++){              
            std::cout << "*";
        }
        spaces += 1;
        stars -= 2;

        std::cout << std::endl;
    }
}
    return 0;
}