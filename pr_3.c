#include<stdio.h>
#include<math.h>

double f(double x){
    return (pow(x,3)-2*x-5);
}

double df(double x){
    return (3*pow(x,2))-2;
}

double newtonRaphson(double x0, double epsilon, int maxIterations){
    double x1;
    for(int i=0;i<maxIterations;i++){
        double fx=f(x0);
        double dfx=df(x0);
        if(dfx==0.0){
            break;
        } 
        x1 = x0 - fx / dfx;
        if((fabs(x1)<epsilon)&&((fabs(x1-x0))<epsilon)){
            return x1;
        }
        x0=x1;
    }
    return x0;
}

int main(){
    double x0,epsilon;
    int maxIterations;
    scanf("%lf %lf %d",&x0,&epsilon,&maxIterations);
    double root=newtonRaphson(x0,epsilon,maxIterations);
    printf("%lf\n",root);
    return 0;
}