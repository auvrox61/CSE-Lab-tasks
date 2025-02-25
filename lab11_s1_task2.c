#include<stdio.h>
#include<string.h>

int my_strlen(char *str){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void my_strrev(char *str){
    int length=my_strlen(str);
    int start=0;
    int end=length-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    my_strrev(str);
    printf("%s",str);
    return 0;
}