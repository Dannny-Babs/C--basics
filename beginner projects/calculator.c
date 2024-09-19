#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

float power(float a, float b)
{
    return pow(a, b);
}

float mod(float a, float b)
{
    return fmod(a, b);
}

float square_root(float a)
{
    return sqrt(a);
}

float sine(float a)
{
    return sin(a);
}

float cosine(float a)
{
    return cos(a);
}

float tangent(float a)
{
    return tan(a);
}

float absolute(float a)
{
    return abs(a);
}

float log_base(float a)
{
    return log(a);
}

// divide function
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Division by zero is not possible, \t");
        return 0;
    }
    else
    {
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

    printf("Enter the operation (+, -, *, /, ^, %, r, S, C, T, A, L): ");
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
    case '^':
        printf("The power of the two numbers is: %.3f", power(a, b));
        break;
    case '%':
        printf("The modulus of the two numbers is: %.3f", mod(a, b));
        break;
    case 'r':
        printf("The square root of the number is: %.3f", square_root(a));
        break;
    case 'S':
        printf("The sine of the number is: %.3f", sine(a));
        break;
    case 'C':
        printf("The cosine of the number is: %.3f", cosine(a));
        break;
    case 'T':

        printf("The tangent of the number is: %.3f", tangent(a));
        break;
    case 'A':

        printf("The absolute value of the number is: %.3f", absolute(a));
        break;
    case 'L':

        printf("The natural logarithm of the number is: %.3f", log_base(a));
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}