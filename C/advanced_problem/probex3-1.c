#include <stdio.h>
#include <string.h>

#define SIZE    64

int main(void){
    char a[SIZE];
    int len;
    unsigned char j = 0x20;
    printf("Input words: ");
    scanf("%[^\n]%*c", a);
    len = strlen(a);
    for(int i = 0; i < len; i++){
        a[i] = a[i] | j;
    }
    printf("%s\n", a);
    return 0;
}