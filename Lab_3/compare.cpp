// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab3C


// Write a program compare.cpp that asks the user to input two dates (the beginning and the end of the interval). 
// The program should check each day in the interval and report which basin had higher elevation on that day by 
// printing “East” or “West”, or print “Equal” if both basins are at the same level.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    
    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    string date, startDate, endDate;
    double eastSt, eastEl, westSt, westEl;

    
    int inInterval = 0; // flag to indicate if read dates are in interval
    
    cout << "Enter starting date: ";
    cin >> startDate;
    
    cout << "Enter ending date: ";
    cin >> endDate;
    cout << endl;
    
    
    while ((fin >> date >> eastSt >> eastEl >> westSt >> westEl) && (inInterval < 2)){ 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns 

        // check if start date is reached
        
        if (date == startDate){
            inInterval = 1;
        }
        if (inInterval == 1){
            cout << date << " ";
            if (eastEl < westEl){
                cout << "West";
            }
            else if (eastEl > westEl){
                cout << "East";
            }
            else {
                cout << "Equal";
            }
            cout << endl;
        }
        if (date == endDate){
            inInterval = 2;
        }
    }

fin.close();
}