#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;



int orderedPrimeFind(int n){
    int prime = 1;
    int count = 1;
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
 //CORRECT (a tad slow)
 
}
