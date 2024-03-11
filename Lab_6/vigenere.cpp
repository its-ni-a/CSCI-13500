// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6C


// Write a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:
        // string encryptVigenere(string plaintext, string keyword);

#include <iostream>
#include <string>
using namespace std;

// helper function
char shiftChar(char c, int rshift);

// caesar cipher encryption
string encryptVigenere(string text, string keyword);

// regular main function
int main() {
    
    string text, key;
    string keyword;
    cout << "Enter a line of text: "; 
    
    getline(cin, text);
    cout << "Enter keyword: ";
    cin >> key;
    
    // print result of caesar function
    cout << encryptVigenere(text, key) << endl;
}

// function to shift the characters
string encryptVigenere(string text, string keyword){
    string encrypt = "";
    char character;
    int num = 0;
    int key;
    int newPosition;
    
    for (int i = 0; i < text.size(); i++){
        character = text[i];
        
        if(isupper(character)){
            key = keyword[num] - 'a';
            
            num = (num + 1) % keyword.size();
            newPosition = (character - 'A' + key) % 26;
            character = 'A' + newPosition;
        }
        
        
        else if(islower(character)){
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.size();
            newPosition = (character - 'a' + key) % 26;
            character = 'a' + newPosition;
        }
        encrypt += character;
    }
    return encrypt;
}    
    