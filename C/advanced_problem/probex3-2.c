#include <stdio.h>
#include <string.h>

#define SIZE    64

int main(void){
    char a[SIZE];
    int len;
    unsigned char j = 0xDF;
    printf("Input words: ");
    scanf("%[^\n]%*c", a);
    len = strlen(a);
    for(int i = 0; i < len; i++){
        if(a[i] != 0x20){
            a[i] = a[i] & j;
        }
    }
    printf("%s\n", a);
    return 0;
}