#include <stdio.h>
#include <string.h>
int main()
{

    char str1[50];
    char str2[50];
    char str3[100];
    printf("Enter the first character: ");
    gets(str1);
    printf("Enter the second character: ");
    gets(str2);
    strcpy(str3, strcat(str1, str2));
    puts(str3);
}