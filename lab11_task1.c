// You are given a positive integer n. You must write a function that returns the largest power of two that is
//less than or equal to n

#include<stdio.h>

int powerofTwo(int n){
    int result=1;
    while(result*2<=n){
        result*=2;
    }
    return result;
}

int main(){
    int n;
    scanf("%d",&n);
    int product=powerofTwo(n);
    printf("%d",product);
    return 0;
}