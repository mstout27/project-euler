#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/
bool isPrime(int p){
    int i = 2;
    bool flag = true;
    while(i < p){
        if(p % i == 0){
            flag = false;
        }
        i++;
    }
    return flag;
}


int orderedPrimeFind(int n){
    int prime = 1;
    int count = 0;
    while(count < n){
        prime+=2;
        if(isPrime(prime)){
            count += 1;
        }
    }
    return prime;
}

int main(){
    

    cout << orderedPrimeFind(10001) << endl; 
    //Correct, but a tad slow
 
}