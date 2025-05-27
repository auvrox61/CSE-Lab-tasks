#include<stdio.h>
#include<stdbool.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

bool linear_search(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}

bool binary_search(int arr[],int x,int n,int start,int end){
    start=0;
    end=n-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid]==x){
            return true;
        } else if(arr[mid]>x){
            end=mid-1;
        } else{
            start=mid+1;
        }
    }
    return false;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int x;
    int start,end;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    if(linear_search(arr,x,n)&&binary_search(arr,x,n,start,end)){
        printf("Found\n");
    } else{
        printf("Not Found\n");
    }
    return 0;
}