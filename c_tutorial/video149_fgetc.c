/* fgetc.c Reading and printing a text file */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;
    
    fp=fopen("test.txt","r");
    if (fp==NULL) {
        printf("Error in the opening of the file");
        exit(0);
    }
    
    while ((c=fegtc(fp))!=EOF) {
        printf("%c",c);
    }
    
    fclose(fp);
}
