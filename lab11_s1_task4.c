#include<stdio.h>
#include<math.h>

 double manhattan_distance(double vector1[], double vector2[], int n){
     double distance=0.0;
     for(int i=0;i<n;i++){
         distance+=fabs(vector1[i]-vector2[i]);
     }
     return distance;
 }
 
 int main(){
     int n;
     scanf("%d",&n);
     double vector1[n],vector2[n];
     for(int i=0;i<n;i++){
         scanf("%lf",&vector1[i]);
     }
     for(int i=0;i<n;i++){
         scanf("%lf",&vector2[i]);
     }
     double result=manhattan_distance(vector1,vector2,n);
     printf("%lf",result);
     return 0;
 }