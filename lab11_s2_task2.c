#include<stdio.h>
#include<string.h>

void palindrome(char *str){
    int is_palindrome=0;
    int length=strlen(str);
    for(int i=0;i<length/2;i++){
        if(str[i]==str[length-i-1]){
            is_palindrome=1;
        } else{
            is_palindrome=0;
        }
    }
    if(is_palindrome==1){
        printf("Palindrome\n");
    } else{
        printf("Non-Palindrome\n");
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    palindrome(str);
    return 0;
}