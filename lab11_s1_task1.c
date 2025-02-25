#include<stdio.h>

int powerofThree(int n){
    int result=1;
    while(result*3<=n){
        result*=3;
    }
    return result;
}

int main(){
    int n;
    scanf("%d",&n);
    int product=powerofThree(n);
    printf("%d",product);
    return 0;
}