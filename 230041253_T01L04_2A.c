#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(){
    FILE* source;
    FILE* dest;
    source=fopen("100dollars.tif","rb");
    dest=fopen("backup_100dollars.tif","wb");

    BYTE metadata[8];
    fread(metadata,sizeof(BYTE),8,source);
    fwrite(metadata,sizeof(BYTE),8,dest);

    BYTE b[500][1192];
    for(int i=0;i<500;i++){
        for(int j=0;j<1192;j++){
            fread(&b[i][j],sizeof(BYTE),1,source);
        }
    }
    for(int i=0;i<500;i++){
        for(int j=1191;j>=0;j--){
            fwrite(&b[i][j],sizeof(BYTE),1,dest);
        }
    }

    BYTE remMetadata[8];
    while(fread(remMetadata,sizeof(BYTE),8,source)!=0) {
        fwrite(remMetadata,sizeof(BYTE),8,dest);
    }

    fclose(source);
    fclose(dest);
    return 0;
} 