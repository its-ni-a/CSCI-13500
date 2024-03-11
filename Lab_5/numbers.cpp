// Author: Nia Hill
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5


// Write a program numbers.cpp that defines functions based on the tasks with regards to prime numbers.  
    
    
#include <iostream>
using namespace std;

// Task A function: determines if n is divisible by d

bool isDivisibleBy(int n, int d){

   bool result;

    //  if n or d = 0
    if (d == 0){
        result = false;
    }

    // if n % d is 0
    else if (n%d == 0){
        result = true;
    }

    // all other possiblities
    else {
        result = false;
    }
    
    return result;
}

// Task B function: determines if x is prime
bool isPrime(int x){

    if (x <= 1){
        return false;
    }
    
    for (int i = 2; i < x; i++){

        if(isDivisibleBy(x, i)){
            return false;
        }
    }
    return true;
}

// Task C function: finds next prime number
int nextPrime(int startingInt){
    if (startingInt <= 1){
        return 2;
    }
    
    bool Prime = false;

    while(!Prime){
        startingInt++;
        if(isPrime(startingInt)){
            return startingInt;
            break;
        }
    }
    return false;
}

// Task D function: calculates the number of prime numbers in the range 
int countPrimes(int firstInt, int secondInt){
    int numPrimes = 0;
    for (int i = firstInt; i <= secondInt; i++){
        
        if (isPrime(i))
            numPrimes++;

        if (i >= secondInt){
            break;
        }
    }
    return numPrimes;
}

// Task E function: determines twin primes
bool isTwinPrime(int num){
    if (!(isPrime(num))){
        return false;
    }
    if ((isPrime(num + 2)) || (isPrime(num - 2))){
        return true;
    }
    else{
        return false;
    }
}

// Task F function: determines next twin prime
int nextTwinPrime(int nexttwin){
    
    int nextPrime = nexttwin + 1;
    while (!(isTwinPrime(nextPrime))){
        nextPrime++;
    }
    if (nexttwin <= 2){
        nextPrime = 2;
    }
    return nextPrime;
}

//Task G function: prints largest twin prime in range
int largestTwinPrime(int starting, int ending){
    
    for (int i = ending; i >= starting; i--){
        if (isTwinPrime(i)) // checks twin prime
        {
            return i;
        }
    }
    return -1;
      
}


int main() {

// Task A
    cout << "Task A: determines if n is divisible by d" << endl;
    
    int n, d;
    cout << "Enter integer n: ";
    cin >> n;
    cout << "Enter integer d: ";
    cin >> d;
    
    cout << isDivisibleBy(n, d) << endl << endl;


// Task B
    cout << "Task B: determines if x is prime" << endl;
    
    int x, y;
    cout << "Enter integer x: ";
    cin >> x;
    cout << "Enter integer y: ";
    cin >> y;
    
    cout << (isPrime(x)) << endl << endl;


// Task C 
    cout << "Task C: determines if x is prime" << endl;

    int startingInt;
    cout << "Enter your starting integer: ";
    cin >> startingInt;
    
    cout << nextPrime(startingInt) << endl << endl;
    
    
// Task D
    cout << "Task D: finds the number of prime numbers in a given range" << endl;
    
    int firstInt, secondInt;
    cout << "Enter first number: ";
    cin >>firstInt;
    cout << "Enter second number: ";
    cin >> secondInt;
    
    // prints the number of prime numbers in that range 
    cout << countPrimes(firstInt, secondInt) << " primes" << endl << endl;
    
    
// Task E
    cout << "Task E: determines if given number is a twin prime number" << endl;

    int num;
    cout << "Enter your number: ";
    cin >> num;
    
   // prints if number is a twin prime 
    cout << isTwinPrime(num) << endl << endl;
    

// Task F 
    cout << "Task F: finds the next twin prime number by means of a given number is a twin prime" << endl;
    int nexttwin;
    cout << "Enter your number: ";
    cin >> nexttwin;
    
   // prints the next twin prime 
    cout << nextTwinPrime(nexttwin) << endl << endl;  
    
    
// Task G
    cout << "Task G: Prints the largest twin prime number in a given range" << endl;
    int starting, ending;
    cout << "Enter your staring number: ";
    cin >> starting;
    cout << "Enter your ending number: ";
    cin >> ending;
    
   // prints the largest twin prime in range 
    cout << largestTwinPrime(starting, ending);

    return 0;

}
