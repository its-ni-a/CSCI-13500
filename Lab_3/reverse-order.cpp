// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab3D


// Write a program reverse-order.cpp which asks the user to input two dates (earlier 
// date then later date). The program should report the West basin elevation for all 
// days in the interval in the reverse chronological order (from the later date to the earlier).

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

    int i = 0;
    string date, earlierDate, laterDate;
    double eastSt, eastEl, westSt, westEl;
    
    string dateArray[365];
    double feetArray[365];
    bool start;

    
    int interval = 0; // flag to indicate if read dates are in interval
    
    cout << "Enter earlier date: ";
    cin >> earlierDate;
    
    cout << "Enter later date: ";
    cin >> laterDate;
    cout << endl;
    
    
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns 

        if (earlierDate == date){
            start = true;
            interval = 1;
        }
        if  (start = true){
            dateArray[interval] = date;
            feetArray[interval] = westEl;
            interval+=1;
        }
        if (laterDate == date){
            break;
        }
        
        
        // if statement to check if date fails
        // within specified interval, if it does
        // read date and store in arrays
        
    }
    
    // for loop to print date and corresponding 
    //west basin elevatin in reverse order
    
    for(int i = interval - 1; i >= 0; i--){
        cout << dateArray[i] << " " << feetArray[i] <<" ft" << endl;
        if (dateArray[i] == earlierDate){
            break;
        }
    }
    

fin.close();
}