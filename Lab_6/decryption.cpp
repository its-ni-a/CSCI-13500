// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6D


// Write a program decryption.cpp that uses the above functions to demonstrate encryption and decryption for both ciphers.

#include <iostream>
#include <string>
using namespace std;

string encryptCaesar(string text, int rshift);
string encryptVigenere(string text, string keyword);

// main function
int main() {
    string text;
    string keyword;
    string encrypt;
    int rshift;

    cout << "Enter some text: ";
    getline(cin, text);

// casear cipher
    cout << "Caesar cipher" << endl;
    cout << "Enter right shift: ";
    cin >> rshift;

    encrypt = encryptCaesar(text, rshift);
    cout << "Ciphertext: " << encrypt << endl;
    cout << "Decrypted: " << encryptCaesar(encrypt, rshift) << endl;
    
// vigenere cipher
    cout << "Vigenere cipher" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;

    encrypt = encryptVigenere(text, keyword);
    cout << "Ciphertext: " << encrypt << endl;
    cout << "Decrypted: " << encryptVigenere(encrypt, keyword) << endl;
    
}

//decrypting caesar cipher
string decryptCaesar(string cipherText, int rshift) {
    string decrypt = "";

    for ( int i = 0; i < cipherText.size(); i++) {
        //will be unchanged if char is non-alpha
        char character = cipherText[i];
        if (isupper(character)) {
            character = 'A' + ( character - 'A' - rshift + 26) % 26;

        }
        //if char is lowercase
        else if (islower(character)) {
            //97 is 'a'
            character = 'a' + (character - 'a' - rshift + 26) % 26;
        }
        decrypt += character;
    }//done decrypting
    return decrypt;
}

//decrypting vigenere cipher
string decryptVigenere(string cipherText, string keyword) {
    string decrypt = "";
    int num = 0;
    int key;
    char character;

    for (int i = 0; i < cipherText.size(); i++) {
        
        character = cipherText[i];

 
        if (isupper(character)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.size();
            character = 'A' + ( character - 'A' - key + 26 ) % 26;
        }
   
        else if (islower(character)) {
            key = keyword[num] - 'a';
            num = ( num + 1) % keyword.size();
            character = 'a' + ( character - 'a' - key + 26 ) % 26;
        }

        decrypt += character;
    }

    return decrypt;
}
// encryption for vigenere
string encryptVigenere(string text, string keyword) {
    string encrypt = "";
    char character; 
    int num = 0;  
    int key; 
    int newPosition; 

    
    for(int i = 0; i < text.size(); i++) {
        
        character = text[i];
        
        if ( isupper(character) ) {   
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.size();
          // shifts position
            newPosition = (character - 'A' + key) % 26;
            character = 'A' + newPosition;
        }
        else if ( islower(character) ) {
            key = keyword [num] - 'a';
            num = (num +1) % keyword.size();
            newPosition = (character - 'a' + key) % 26;
            character = 'a' + newPosition;
        }
        encrypt += character;
    } 
    return encrypt;
}

// function for shifts
char shiftChar(char c, int rshift) {
    int shiftCharacter;
    char newCharacter;
    if(isupper(c)) {
        
        newCharacter = (c - 'A' + rshift) % 26 + 'A';
        return newCharacter;
    }
    else if (islower(c)) {
        
        shiftCharacter = ( (int)c - 97 + rshift ) % 26 + 97;
        return (char)shiftCharacter;
    }
    else {
        return c; 
    }
}

//caesar cipher encryption
string encryptCaesar(string text, int rshift) {
    string encrypt = "";
    
    for (int i = 0; i < text.size(); i++){
        encrypt += shiftChar(text[i], rshift);
    }
    
    return encrypt;
}