#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

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

long largestPrime(long no){
    long largest = 0;
    long curr = 3;
    long limit = sqrt(no);
    while(curr < limit){
        if(no % curr == 0){
            if(isPrime(curr)){
                largest = curr;
            }
        }
        curr+=2;
    }
    return(largest);
}

int main(){

    cout << largestPrime(600851475143) << endl; 
    //Correct
}