#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if((n&1)==0){
        printf("even\n");
    } else{
        printf("odd\n");
    }
    return 0;
}