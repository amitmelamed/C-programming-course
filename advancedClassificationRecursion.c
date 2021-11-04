#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindromeRec(int arr[],int start,int end){
    if(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        else return isPalindromeRec(arr,start+1,end-1);
    }
    return 1;
}

int isPalindrome(int num){
    int size=log10(num);
    int arr [size+1];
    int count=0;
    int numSaver=num;
    while(numSaver>0){
        arr[count]=numSaver%10;
        numSaver=numSaver/10;
        count++;
    }
    return isPalindromeRec(arr,0,count-1);
}
int isArmstrongRec(int num,int arr [], int index,int end, int total){
    if(index==end){
        if(total==num){
            return 1;
        }
        else {
            
            return 0;}
    }
    total=total+pow(arr[index],end);
    return isArmstrongRec(num,arr,index+1,end,total);
}
int isArmstrong(int num){
    int size=log10(num);
    int arr[size+1];
    int count=0;
    int numSaver=num;
    while(numSaver>0){
        arr[count]=numSaver%10;
        numSaver=numSaver/10;
        count++;
    }
    return isArmstrongRec(num,arr,0,count,0);
}
