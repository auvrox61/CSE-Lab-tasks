#include<stdio.h>

unsigned int roundUpPower2(unsigned int N){
    unsigned int result=1;
    while(result<N){
        result<<=1;
    }
    return result;
}

unsigned int absolute(unsigned int N){
    if(N<0){
        return ~N+1;
    } else{
        return N;
    }
}

unsigned int swap(unsigned int N){

}

unsigned not(unsigned int N){
    if(N==0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int Q;
    scanf("%d",&Q);
    while(Q--){
        int t;
        unsigned int N;
        scanf("%d %u",&t,&N);
        switch(t){
            case 1:
            printf("%u\n",roundUpPower2(N));
            break;
            case 2:
            printf("%u\n",absolute(N));
            break;
            case 3:
            printf("%u\n",swap(N));
            break;
            case 4:
            printf("%u\n",not(N));
            break;
            default:
            printf("Invalid\n");
        }
    }
    return 0;
}