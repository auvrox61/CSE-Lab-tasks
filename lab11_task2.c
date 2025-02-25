// You need to implement your own versions of the character classification and conversion functions.
//Then, using these functions, you will implement a case-swapping program that converts lowercase
//letters to uppercase and uppercase letters to lowercase in a given string
// Function Prototypes
//int my_isupper(char c);
//int my_islower(char c);
 // Returns 1 if c is uppercase, 0 otherwise
 // Returns 1 if c is lowercase, 0 otherwise
//char my_toupper(char c);
 // Converts c to uppercase if it’s lowercase, otherwise returns c unchanged
//char my_tolower(char c);
 // Converts c to lowercase if it’s uppercase, otherwise returns c unchanged
//Note: You must implement all the functions with the given prototypes and use them to solve the
//problem

#include<stdio.h>
#include<string.h>

int my_isupper(char c){
    if(c>='A'&&c<='Z'){
        return 1;
    } else{
        return 0;
    }
}

int my_islower(char c){
    if(c>='a'&&c<='z'){
        return 1;
    } else{
        return 0;
    }
}

char my_toupper(char c){
    if(my_islower(c)){
        return c-('a'-'A');
    } else{
        return c;
    }
}

char my_tolower(char c){
    if(my_isupper(c)){
        return c+('a'-'A');
    } else{
        return c;
    }
}

void modified(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(my_isupper(str[i])){
            str[i]=my_tolower(str[i]);
        } else if(my_islower(str[i])){
            str[i]=my_toupper(str[i]);
        }
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    modified(str);
    printf("%s",str);
    return 0;
}