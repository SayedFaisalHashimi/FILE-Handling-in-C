#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("abc.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputc('a', fp);

    fclose(fp);
    return 0;
}
