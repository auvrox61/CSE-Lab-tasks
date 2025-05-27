#include<stdio.h>

int unsigned_char(){
    unsigned char x=~0;
    int count=0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}

int unsigned_short(){
    unsigned short x=~0;
    int count=0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}

int unsigned_int(){
    unsigned int x=~0;
    int count=0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}

int unsigned_long(){
    unsigned long x=~0;
    int count=0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}

int unsigned_long_long(){
    unsigned long long x=~0;
    int count=0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}

int main(){
    int res1=unsigned_char();
    int res2=unsigned_short();
    int res3=unsigned_int();
    int res4=unsigned_long();
    int res5=unsigned_long_long();

    printf("unsigned char : %d\n",res1);
    printf("unsigned short : %d\n",res2);
    printf("unsigned int : %d\n",res3);
    printf("unsigned long : %d\n",res4);
    printf("unsigned long long : %d\n",res5);
    return 0;
}