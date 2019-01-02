#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;

//Euler problems

//   p1       ////////////////////////
int sumFind(){
    int sum = 0;
    for(int i=0; i!=1000; i++){
        if(i % 3 == 0){
            sum += i;
        }
        else if(i % 5 == 0){
            sum += i;
        }
        
    }
    return sum;
    
}

int main(){
    
 cout << sumFind() << endl;                  //p1 - CORRECT
 
}
