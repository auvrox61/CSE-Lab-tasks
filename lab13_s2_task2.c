#include<stdio.h>

void printHex(int n){
    if(n==0){
        return;
    } else if(n>0){
        printHex(n/16);
    }
    int rem=n%16;
    if(rem<10){
        printf("%d",rem);
    } else if(rem==10){
        printf("A");
    } else if(rem==11){
        printf("B");
    } else if(rem==12){
        printf("C");
    } else if(rem==13){
        printf("D");
    } else if(rem==14){
        printf("E");
    } else if(rem==15){
        printf("F");
    } 
}

int main(){
    int n;
    scanf("%d",&n);
    printHex(n);
    return 0;
}