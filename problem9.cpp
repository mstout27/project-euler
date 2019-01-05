#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

int findTripletSum(){
    int m = 1;
    int a;
    int b;
    int c;
    bool mexit = false;
    int product;
    while(m < 100 && !mexit){   
        int n = m+1;
        bool nexit = false;
        while(n < 100 && !nexit){
            cout << "current values of m, n: " << m << ' ' << n << endl;
            a = pow(n,2) - pow(m,2);
            b = 2*n*m;
            c = pow(n,2) + pow(m,2);

            cout << "new triplet: " << a <<' '<< b <<' '<< c << endl;

            n++;
            
            if(a + b + c >= 1000){
                nexit = true;
            }
            int multiple = 2;
            while(a + b + c <= 1000){
                if(a + b + c == 1000){
                    cout << "FINAL TRIPLET FOUND: " << a <<' '<< b <<' '<< c << endl;
                    product = a*b*c;
                    mexit = true;
                }
                a *= multiple;
                b *= multiple;
                c *= multiple;
                cout << "triplet of multiple " << multiple <<": " << a <<' '<< b <<' '<< c << endl;
                multiple++;
            }
            
            
        }        
        m++;
    }

    return product;


}

int main(){
    
    cout << findTripletSum() << endl;
    //Correct
}