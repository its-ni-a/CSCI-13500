// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6B


// Write a program caesar.cpp with functions implementing Caesar cipher encryption
        // A helper function to shift one character by rshift
        //char shiftChar(char c, int rshift);

        // Caesar cipher encryption
        //string encryptCaesar(string plaintext, int rshift);

#include <iostream>
#include <string>
using namespace std;

// helper function
char shiftChar(char c, int rshift);

// caesar cipher encryption
string encryptCaesar(string text, int rshift);

// regular main function
int main() {
    
    string text, rshift;
    int shift;
    cout << "Enter a line of text: "; 
    
    getline(cin, text);
    cout << "Enter shift: ";
    cin >> shift;
    
    // print result of caesar function
    cout << encryptCaesar(text, shift) << endl;
}

// function to shift the characters
char shiftChar(char c, int rshift){
    int shiftChar;
    char newChar;
    if (isupper(c)){
        newChar = (c - 'A' + rshift) % 26 + 'A';
        return newChar;
    }
    
    else if(islower(c)){
        shiftChar = ((int)c - 97 + rshift) % 26 + 97;
        return (char)shiftChar;
    }
    
    else {
        return c;
    }
}
    
// dies caser encryption to the text  
string encryptCaesar(string text, int rshift){
    string encryption = "";
    for (int i = 0; i < text.size(); i++){
        encryption += shiftChar(text[i], rshift);
    }
    return encryption;
}    
    