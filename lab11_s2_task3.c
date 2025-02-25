//The sum of the factorial of each digit.

#include<stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int sumofdigits(int num){
    int sum=0;
    int digit;
    while(num>0){
        digit=num%10;
        sum+=factorial(digit);
        num/=10;
    }
    return sum;
}

int main(){
    int num;
    scanf("%d",&num);
    int result=sumofdigits(num);
    printf("%d",result);
    return 0;
}