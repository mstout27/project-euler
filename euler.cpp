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


////   p2           /////////////////
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


/////    p3       //////////////

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


//////    p4    //////////////////
bool isPalindrome(int p){
    bool palindrome = false;
    
    int logarithm = log10(p);
    int arrsize = (logarithm/1) + 1;
    
    int digits[arrsize];
    int copy = p;
    for(int i = 0; i < arrsize; i++){
        digits[i] = p % 10 ;
        p -= digits[i];
        p = p/10;
        
    }
    
    int flipnum = 0;
    
    for(int j = 0; j < arrsize; j++){
        flipnum += digits[j] * (pow(10,arrsize-j-1));
    }
    if(flipnum == copy){
        palindrome = true;
    }
    return palindrome;
}
    
int palindromeProduct(){
    int largest = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            if(isPalindrome(i*j)){
                if((i*j) > largest){ 
                    largest = i*j;
                }
            }
        }
    }
    
    return largest;
    
}

///////// p5 /////////////////////////////

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

////// p6  ///////////////////////////////////////////
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

///////// p7 ///////////////////////////////////////

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


///////  p8 ////////////////////////////////////////////
/*
int maxLargeProd(){
    
    char buf[1000];
    FILE *inputFile = fopen(euler_p8.txt, "r");
    
    while (fgets(buf, 1000, ptr_file) != NULL)
        cout << buf << endl;
   
   cout << buf[0] << endl;
}
*/



int main(){
    
 //cout << sumFind() << endl;                  //p1 - CORRECT
 //cout << evenFibSum() << endl;               //p2 - CORRECT
 //cout << largestPrime(600851475143) << endl; //p3 - CORRECT
 //cout << palindromeProduct() << endl;        //p4 - CORRECT
 //cout << smallestMultiple() << endl;         //p5 - make faster!
 //cout << sqDif() << endl;                    //p6 - CORRECT
 cout << orderedPrimeFind(10001) << endl;    //p7 - CORRECT (a tad slow)
 //cout << maxLargeProd() << endl;
 
 
}