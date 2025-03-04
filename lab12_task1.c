#include<stdio.h>

void findStats(int arr[], int size, int* max, int* min, double* average){
    *max=arr[0];
    *min=arr[0];
    double sum=0.0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }
    *average=sum/size;
}

void printArray(int arr[], int size){
    printf("Array : \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");    
}

int main(){
    int size;
    scanf("%d",&size);
    int numbers[size];
    int maximum,minimum;
    double avg;
    for(int i=0;i<size;i++){
        scanf("%d",&numbers[i]);
    }
    findStats(numbers,size,&maximum,&minimum,&avg);
    printArray(numbers,size);
    printf("Max : %d\n",maximum);
    printf("Min : %d\n",minimum);
    printf("Average : %.1lf",avg);
    return 0;
}