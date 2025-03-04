#include<stdio.h>

void squareElements(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*arr[i];
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void replace(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]/2;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void reverse(int arr[],int size){
    for(int i=size;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int operation;
    scanf("%d",&operation);
    switch(operation){
        case 1:
        squareElements(arr,size);
        break;
        case 2:
        replace(arr,size);
        break;
        case 3:
        reverse(arr,size);
        break;
        default:
        printf("Invalid Operation");
        return 1;
    }
    return 0;
}