#include<stdio.h>
#include<math.h>

double euclidean_distance(double vector1[], double vector2[], int n){
    double distance=0.0;
    for(int i=0;i<n;i++){
        distance+=pow((vector1[i]-vector2[i]),2);
    }
    return sqrt(distance);
}

int main(){
    int n;
    scanf("%d",&n);
    double vector1[n];
    double vector2[n];
    for(int i=0;i<n;i++){
        scanf("%lf",&vector1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&vector2[i]);
    }
    double result=euclidean_distance(vector1,vector2,n);
    printf("%lf",result);
    return 0;
}