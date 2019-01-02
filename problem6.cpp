#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;

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
 
}
