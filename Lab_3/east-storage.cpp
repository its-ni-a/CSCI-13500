// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab3A

// Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    
ifstream fin("Current_Reservoir_Levels.tsv");

if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}


string junk;        // new string variable
getline(fin, junk); // read one line from the file 

string date;
string userDate;
double eastSt, eastEl, westSt, westEl;

cout << "Enter date in the (MM/DD/YYYY) format: ";
cin >> userDate;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
 
    // for example, to print the date and East basin storage:
    
    
    // asks the user to input a string 
    // representing the date 
    // (in MM/DD/YYYY format), 
    // and prints 
    // out the East basin storage on that 
    // day.
    
    if (userDate == date){
    cout << "East basin storage: " << eastSt << " billion gallons" << endl;
    }
}
fin.close();
}

