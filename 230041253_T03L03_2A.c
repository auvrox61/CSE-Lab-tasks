#include<stdio.h>

int bs(float arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    if(bs(arr,n)){
        printf("YES\n");
        for(int i=0;i<n;i++){
        printf("%f",arr[i]);
    }
    } else{
        printf("NO\n");
    }
    return 0;
}