// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6A


// Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces).
//  The program should report all characters from the input line together with their ASCII codes. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string text;
    cout << "Enter a line of text: "; 
    
    // getline to get inpu
    getline(cin, text);
    
    for(int i = 0; i < text.size(); i++){
        // char c = text(l);
        cout << text[i] << " " << (int)text[i] << endl;
    }
    
    return 0;
}






