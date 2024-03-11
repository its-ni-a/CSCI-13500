/*
Author: Nia Hill
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Write a program month.cpp that asks the user to input the year and the month (1-12) 
and prints the number of days in that month (taking into account leap years). You may
not use switch case or arrays even if you know these language constructs.
*/


#include <iostream>

int main(){
    std::cout << "Enter year: " ;
    int year;
    std::cin >> year;
    
    std::cout << "Enter month: " ;
    int month;
    std::cin >> month;
    
    
    
    if (month == 2){ // for February
        if ((year % 4) != 0){
            std::cout << "28 days" << std::endl;
        }
        else if ((year % 100) != 0){
            std::cout << "29 days" << std::endl;
        }
        else if ((year % 400) != 0) { 
            std::cout << "28 days" << std::endl;
        }
        else{
            std::cout << "29 days" << std::endl;
        }
    } 
    
    else if ((1 <= month) && (month <= 7)){ //for January - July (not February)
        if ((month % 2) == 0 ){
            std::cout << "30 days";
        }
        else if ((month % 2) != 0 ){
            std::cout << "31 days";
        }
    }
    
    else if ((8 <= month) && (month <= 12)){ //for August - December
        if ((month % 2) == 0 ){
            std::cout << "31 days";
        }
        else if ((month % 2) != 0 ){
            std::cout << "30 days";
        }
    }
    

    return 0;
}


