// You are given two non-negative integers n and r, where n ≥ r. You must calculate and print the number
//of combinations (nCr) and the number of permutations (nPr) of r items selected from a set of n distinct
//items.
//Function Prototypes
//unsigned long long factorial(int n); // Returns n!
//unsigned long long nCr(int n, int r);
// Returns n choose r
//unsigned long long nPr(int n, int r);
// Returns permutation of n things taken r at a time
//Note: You must implement all the functions with the given prototypes and use them to solve the
//problem.

#include<stdio.h>

unsigned long long factorial(int n){
    unsigned long long factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

unsigned long long nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

unsigned long long nPr(int n, int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    if(n>=0&&r>=0&&n>=r){
        printf("%llu\n%llu",nCr(n,r),nPr(n,r));
    } else{
        printf("Invalid choice of n and r\n");
    }
    return 0;
}