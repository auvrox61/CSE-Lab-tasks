#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(){
    FILE* original;
    FILE* blurry;
    original=fopen("100dollars.tif","rb");
    blurry=fopen("blurry_100dollars.tif","wb");

    BYTE metadata[8];
    fread(metadata,sizeof(BYTE),8,original);
    fwrite(metadata,sizeof(BYTE),8,blurry);

    BYTE b[500][1192];
    for(int i=0;i<500;i++){
        for(int j=0;j<1192;j++){
            fread(&b[i][j],sizeof(BYTE),1,original);
        }
    }
    for(int i=0;i<500;i++){
        for(int j=0;j<1192;j+=4){
            int sum=0;
            for(int k=0;k<4;k++){
                sum+=b[i][j+k];
            }
            BYTE avg=sum/4;
            for(int k=0;k<4;k++){
                fwrite(&avg,sizeof(BYTE),1,blurry);
            }
        }
    }
    BYTE remMetadata[8];
    while(fread(remMetadata,sizeof(BYTE),8,original)!=0) {
        fwrite(remMetadata,sizeof(BYTE),8,blurry);
    }
    fclose(original);
    fclose(blurry);
    return 0;
}