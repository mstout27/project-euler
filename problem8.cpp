#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/*

The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?

*/

unsigned long maxLargeProd(){
    long size;
    char* buf;
    FILE *inputFile = fopen("problem8_input.txt", "r");
    if(!inputFile){
        fputs("Error opening file",stderr);
        exit(1);
    }

    fseek(inputFile, 0, SEEK_END);
    size = ftell(inputFile);
    rewind(inputFile);

    buf = (char*)malloc(size);
    if(!buf){
        fputs("Error allocating memory",stderr);
        exit(2);
    }
    size_t result = fread(buf, 1, size, inputFile);
    if(result != size){
        fputs("Error reading file",stderr);
        exit(3);
    }
    unsigned long currProduct;
    unsigned long largestProduct = 0;
    int temp;
    for(int runStart = 0; runStart < size-12; runStart++){
        currProduct = 1;
        cout << "current run: ";
        if(buf[runStart] != '0'){
            for(int j = runStart; j < runStart + 13; j++){
                if(buf[j] == '\n'){
                    j++;
                    runStart++;
                }
                currProduct *= (int)buf[j] - 48;    
                cout << buf[j];
            }
        }
        cout << endl << "current product = " << currProduct << endl;
        if (currProduct >= largestProduct){
            largestProduct = currProduct;  
        }
        cout << "largest product = " << largestProduct << '\n' << endl;
    }

    fclose(inputFile);
    free(buf);
    return largestProduct;
}

int main(){
    
    cout << maxLargeProd() << endl;    
    //Correct
}