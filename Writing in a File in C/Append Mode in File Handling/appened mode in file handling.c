#include <stdio.h>

int main(void)
{
    char str[500];
    FILE *fp = NULL;

    fp = fopen("abc.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Enter the content you want to append: ");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        fputs(str, fp);
        printf("Successfully appended.\n");
    } else {
        printf("Error reading input.\n");
    }

    fclose(fp);

    return 0;
}
