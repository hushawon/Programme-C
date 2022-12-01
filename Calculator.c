#include <stdio.h>
int main ()
{
    int n1,n2;
    char opt;
    float res;
    printf("select an operator (+,-,*,/)to perform an operation in c calculator \n");
    scanf("%c", &opt);
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    if(opt =='+') {
        res = n1 + n2;
        printf("Addition of %d and %d is : %f", n1, n2, res);
    }

    else if(opt == '-') {
        res = n1 - n2;
        printf("Subtraction of %d and %d is : %f", n1, n2, res);
    }

    else if(opt == '*') {
        res = n1 * n2;
        printf("Multiplication of %d and %d is : %f", n1, n2, res);
    }

    else if(opt == '/') {
        res = n1 / n2;
        printf("Divition of %d and %d is : %f", n1, n2, res);
    }

    return 0;
}

