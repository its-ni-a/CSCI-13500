/* 
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

Write a program upper.cpp that prints the top-right half of a square, given the side length. */

#include <iostream>
int main() {
  
  int length;
  
  std::cout << "Input length: ";
  std::cin >> length;
  
  
  std::cout << "\nShape: " << std::endl;
  
  for (int row = 0; row < length; row++){
        for (int col = 0; col < length; col++){
            
            if(row <= col){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
           
                
            
            
            
        }
        std::cout << std::endl;
    }
}