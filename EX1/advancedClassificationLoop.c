#include <stdio.h>
#include <math.h>
#include "NumClass.h"




int isArmstrong(int num){
    int numSaver=num;
    int countDigits=0;
    int count=0;
    while(numSaver>0){
        countDigits++;
        numSaver=numSaver/10;
    }
        

    numSaver=num;
    int k=countDigits;
    while(k>0){
        count=count+pow(numSaver%10,countDigits);
        numSaver=numSaver/10;
        k--;
    }
    if(count==num){
        return 1;
    }
    return 0;
}

int isPalindrome(int num){
    int numSaver=num;
    int count=0;
    while(numSaver>0){
        count++;
        numSaver=numSaver/10;
    }

    int arr [count];
    numSaver=num;

    count=0;
    while(numSaver>0){
        arr[count]=numSaver%10;
        numSaver=numSaver/10;
        count++;
    }
    for(int i=0;i<count;i++){
        if(arr[i]!=arr[count-i-1]){
            return 0;
        }
    }
    return 1;
    
}