#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int smallestMultiple(){
    int mul = 20;
    int i = 1;
    bool flag = true;
    int mod = 1;
    while(flag){
        
        for(int j = 1; j<21; j++){
            mod = mul % j;
            if(mod!=0){
                
                mul+=20;
                //cout << mul << endl;
                j=1;
            }
            else{
                flag = false;
            }
        }
    
    }
    return mul;
}

int main(){
    
 cout << smallestMultiple() << endl; 
 //Correct - could be faster
 
}