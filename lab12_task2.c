#include<stdio.h>

void findStats(int arr[], int size, int* max, int* min, double* average){
    for(int i=0;i<size;i++){
        int *min=arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        int *max=arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    double sum=0.0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    double average=sum/size;
}

void printArray(int arr[], int size){
    printf("Array :\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int min,max;
    double average;
    printf("Minimum : \n",min);
    printf("Maximum : \n",max);
    printf("Average : \n",average);
}

int main(){
    int size;
    int numbers[size];
    for(int i=0;i<size;i++){
        scanf("%d",&numbers[i]);
    }
    int maximum,minimum;
    double avg;
    findStats(numbers, 5, &maximum, &minimum, &avg);
    printArray(numbers,5);
    return 0;
}