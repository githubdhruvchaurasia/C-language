#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the number of marks you have scored in the test : ");
    scanf("%d", &marks);

    if (marks <= 100, marks >= 90)
    {
        printf("A+ \n");
    }

    else if (marks <= 70, marks >= 89)
    {
        printf("A \n");
    }

    else if (marks <= 60, marks >= 69)
    {
        printf("B \n");
    }

    else
    {
        printf("C \n");
    }
    return 0;
}