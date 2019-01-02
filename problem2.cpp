#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;

int evenFibSum(){
    int evensum = 0;
    int num1 = 1;
    int currnum = 2;
    int temp = 0;

    while(currnum < 4000000){ 
        if(currnum % 2 == 0){
            evensum += currnum;
        }
        temp = num1;
        num1 = currnum;
        currnum = currnum + temp;
    }
    return evensum;
}

int main(){   
 cout << evenFibSum() << endl;              
}
