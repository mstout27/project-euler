#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

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

int main(){
    
    cout << palindromeProduct() << endl; 
    //Correct
}