#include <stdio.h>

#define MAX 100

int main(void)
{
    char str[MAX] = "Hi mate, how are you doing? you got ";
    char ch = 'a';
    int number = 100;
    
    FILE *fp = fopen("abc.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, " %s %c %d",str,ch,number);

    fclose(fp);
    return 0;
}
