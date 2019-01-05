#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

int sqDif(){
    int sumsq = 0;
    int i = 1;
    while(i < 101){
        sumsq += (i*i);
        i++;
    }
    
    int sqsum = 0;
    int j = 1;
    while(j < 101){
        sqsum += j;
        j++;
    }
    sqsum *= sqsum; 
    
    
    return(sqsum - sumsq);
}

int main(){
    
    cout << sqDif() << endl;
    //Correct
 
}