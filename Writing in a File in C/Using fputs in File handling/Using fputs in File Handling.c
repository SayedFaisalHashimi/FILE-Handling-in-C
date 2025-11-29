#include <stdio.h>

#define MAX 50

int main(void)
{
    char str[MAX]= "I am really good.";
    
    FILE *fp = fopen("abc.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs(str, fp);

    fclose(fp);
    return 0;
}
