#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the First Number : ");
    scanf("%d", &num1);

    printf("Enter the Second  Number : ");
    scanf("%d", &num2);

    printf("Enter the Third Number : ");
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;

    printf("The Sum of numbers : %d \n", sum);
    return 0;
}