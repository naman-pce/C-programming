#include <stdio.h>

int main()

{
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter Operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        result = a+b;
        break;

    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    case '%':
        result = a%b;
        break;
    
    default:
        printf("Invalid Operator");
    }

    printf("final outcome is : %d",result);
    return 0;

}
