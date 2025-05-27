#include<stdio.h>
#include<string.h>

void xorCrypt(char * str, char key){
    int i=0;
    while(str[i]!='\0'){
        str[i]=str[i]^key;
        i++;
    }
}

int main(){
    char str[50];
    char key;
    printf("Enter a Sentence :\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter a Key :\n");
    scanf(" %c",&key);
    xorCrypt(str,key);
    printf("Encrypted : %s\n",str);
    xorCrypt(str,key);
    printf("Decrypted : %s\n",str);
    return 0;
}