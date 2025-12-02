#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch = fgetc(fp);
    printf("%c\n", ch);

    fclose(fp);
    return 0;
}
