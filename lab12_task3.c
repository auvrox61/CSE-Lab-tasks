#include<stdio.h>
#define MAX_H 100
#define MAX_W 100

void printImage(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            printf("%d ",image[i][j]);
        }
        printf("\n");
    }
}

void invertImage(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            image[i][j]=255-image[i][j];
        }
    }
}

void reverseHorizontal(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width/2;j++){
            int temp=image[i][j];
            image[i][j]=image[i][width-j-1];
            image[i][width-j-1]=temp;
        }
    }
}

void reverseVertical(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height/2;i++){
        for(int j=0;j<width;j++){
            int temp=image[i][j];
            image[i][j]=image[height-i-1][j];
            image[height-i-1][j]=temp;
        }
    }
}

void thresholdImage(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            image[i][j]=((image[i][j])<128)?0:255;
        }
    }
}

int main(){
    int height,width;
    scanf("%d %d",&height,&width);
    int image[MAX_H][MAX_W];
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            scanf("%d",&image[i][j]);
        }
    }
    int operation;
    scanf("%d",&operation);
    switch(operation){
        case 1:
        invertImage(image,height,width);
        break;
        case 2:
        reverseHorizontal(image,height,width);
        break;
        case 3:
        reverseVertical(image,height,width);
        break;
        case 4:
        thresholdImage(image,height,width);
        break;
        default:
        printf("Operational Error\n");
        return 1;
    }
    printImage(image,height,width);
    return 0;
}