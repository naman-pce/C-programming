#include <stdio.h>

int main()

{
    int a, b, c;
    printf("Enter 3 Numbers");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
    {
        if(a > c)
        {
            printf("First number is Largest");
        }
        else
        {
            printf("Third number is Largest");
        }
        
    }
    else
    {
        if(b > c)
        {
            printf("Second Number is Largest");
        }
        else
        {
            printf("Third Number is Largest");
        }
    }
    return 0;
}
