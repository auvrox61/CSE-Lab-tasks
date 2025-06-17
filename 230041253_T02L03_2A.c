#include<stdio.h>
#include<string.h>

typedef struct{
    char name[100];
    int ml;
    int dt;
    int net;
    int sum;
}student;

int main(){
    int n;
    scanf("%d",&n);
    student students[n];
    for(int i=0;i<n;i++){
        scanf("%s",students[i].name);
        scanf("%d%d%d",&students[i].ml,&students[i].dt,&students[i].net);
        students[i].sum=students[i].ml+students[i].dt+students[i].net;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(students[j].sum<students[j+1].sum){
                student temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
            else if(students[j].sum==students[j+1].sum){
                if(students[j].ml<students[j+1].ml){
                    student temp=students[j];
                    students[j]=students[j+1];
                    students[j+1]=temp;
                }
                else if(students[j].ml==students[j+1].ml){
                    if(students[j].dt<students[j+1].dt){
                        student temp=students[j];
                        students[j]=students[j+1];
                        students[j+1]=temp;
                    }
                }
            }
        }
    }

    int rank=1;
    for(int i=0;i<n;i++){
        if(i>0 && students[i].sum==students[i-1].sum && students[i].ml==students[i-1].ml && students[i].dt==students[i-1].dt && students[i].net==students[i-1].net){
        }
        else{
            rank=i+1;
        }
        printf("%d %s\n",rank,students[i].name);
    }
    return 0;
}
