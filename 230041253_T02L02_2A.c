#include<stdio.h>

int main(){
    int M,N,k;
    int low,high;
    scanf("%d %d",&M,&N);
    int mat[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d",&k);
    int low=0;high=M*N-1;
    int found=0,row=-1,col=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        int mid_V=mat[mid/N][mid%N];

        if(mid_V==k){
            found=1;
            row=mid/N+1;
            col=mid%N+1;
            break;
        } else if(mid_V<k){
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
    if(found){
        printf("True (%d,%d)\n",row,col);
    } else{
        printf("False\n");
    }
    return 0;
}