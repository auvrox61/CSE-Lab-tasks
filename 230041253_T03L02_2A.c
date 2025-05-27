#include<stdio.h>

int firstOccurence(int arr[],int n,int x,int low,int high){
    low=0;
    high=n-1;
    int result=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==x){
            result=mid;
            high=mid-1;
        } else if(arr[mid]>x){
            high=mid-1;
        } else{
            low=mid+1;
        }
    }
    return result;
}

int lastOccurence(int arr[],int n,int x,int low,int high){
    low=0;
    high=n-1;
    int result=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==x){
            result=mid;
            low=mid+1;
        } else if(arr[mid]>x){
            high=mid-1;
        } else{
            low=mid+1;
        }
    }
    return result;
}

int main(){
    int n;
    int high,low;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count=(-firstOccurence(arr,n,x,low,high)+lastOccurence(arr,n,x,low,high))+1;
    printf("%d\n",count);
    return 0;
}