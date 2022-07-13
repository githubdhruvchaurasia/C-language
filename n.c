#include <stdio.h>
int main()
{
    int marks;

    printf("Enter the marks of Student : ");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("You are fail. Do work Harder \n");
    }
    else
    {
        (marks > 30);
        printf("Welldone! Keep Going \n");
    }
    return 0;
}
