#include<stdio.h>

int sumofdigits(int num){
    while(num>=10){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    return num;
}

int main(){
    int num;
    scanf("%d",&num);
    int result=sumofdigits(num);
    printf("%d",result);
    return 0;
}