#include<stdio.h>

struct element {
    int value;
    int index;
};

void bs(struct element arr[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j].value>arr[j+1].value) {
                struct element temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main() {
    int n,m;
    scanf("%d",&n);
    struct element arr[n];
    for(int i=0;i<n;i++) {
        int val;
        scanf("%d",&val);
        arr[i].value=val;
        arr[i].index=i;
    }
    scanf("%d",&m);
    bs(arr,n); 
    printf("%d\n",arr[n - m].index);
    return 0;
}
