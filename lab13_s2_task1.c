#include<stdio.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    } else if(b>0 && a>b){
        return gcd(b,a%b);
    } else if(b>0 &&  a<b){
        return gcd(a,b%a);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=gcd(a,b);
    printf("%d",result);
    return 0;
}