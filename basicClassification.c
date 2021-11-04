#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int factorialFunc(int n) {
    if (n>=1){
        return n*factorialFunc(n-1);
    }
    else{
                return 1;
    }
}
int isPrime(int num){
    for(int k=2;k<num;k++){
        if(num%k==0){
            return 0;
        }
    }
    return 1;
}
int isStrong(int num){
    int numSaver=num;
    int count=0;
    while(numSaver>0){
        count=count+(factorialFunc(numSaver%10));
        numSaver=numSaver/10;
    }

    if(count==num){
        return 1;
    }
    return 0;
}

