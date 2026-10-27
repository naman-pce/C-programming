#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    //1. strlen() = finds the length of strings
    printf("Length of strl = %d\n", strlen(str1));
    //2. strcpy = Copy str3 from str1
    strcpy(str3, str1);
    printf("Copied string = %s\n", str3);
    //3. strcmp() = compare the strings
    printf("strcmp() result = %d\n", strcmp(str1, str2));
    //4. strcat() = join 2 strings without space
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    return 0;
}
