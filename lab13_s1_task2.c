#include<stdio.h>

void printOctal(int n){
    if(n==0){
        return;
    }
    else if(n>1){
        printOctal(n/8);
    }
    printf("%d",n%8);
}

int main(){
    int n;
    scanf("%d",&n);
    printOctal(n);
    return 0;
}