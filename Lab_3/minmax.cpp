// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab3B


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

    string date;
    double eastSt, eastEl, westSt, westEl;

    double int_min = 10000;
    double int_max = 0;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns 

        // finds minimum
        if (eastSt < int_min) {
            int_min = eastSt;
        }

        // finds maximum
        if (eastSt > int_max) {
            int_max = eastSt;
        }
    }

    cout << "minimum storage in East basin: " << int_min << " billion gallons" << endl;
    cout << "maximum storage in East basin: " << int_max << " billion gallons" << endl;

    fin.close();
}