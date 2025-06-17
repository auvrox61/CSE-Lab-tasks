#include<stdio.h>

void bs1(int arr1[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}

void bs2(int arr2[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr2[j]>arr2[j+1]){
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    int y=0;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    bs1(arr1,n);
    bs2(arr2,n);
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            y=1;
        }
        else{
            y=0;
        }
    }
    if(y==1){
        printf("SAME\n");
    } else if(y==0){
        printf("DIFFERENT\n");
    }
    return 0;
}