#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// add function
float add(float a, float b)
{
    return a + b;
}

// subtract function
float subtract(float a, float b)
{
    return a - b;
}

// multiply function
float multiply(float a, float b)
{
    return a * b;
}

// divide function
float divide(float a, float b)
{
    if (b==0)
    {
        printf("Division by zero is not possible, \t");
        return 0;
    }else{
        return a / b;
    }

    
}

// main function
int main()
{
    float a, b;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%f", &b);

    switch (operation)
    {
    case '+':
        printf("The sum of the two numbers is: %.3f", add(a, b));
        break;
    case '-':
        printf("The difference of the two numbers is: %.3f", subtract(a, b));
        break;
    case '*':
        printf("The product of the two numbers is: %.3f", multiply(a, b));
        break;
    case '/':
        printf("The division of the two numbers is: %.3f", divide(a, b));
        break;
    default:
        printf("Invalid operation");
    }

    return 0;
}