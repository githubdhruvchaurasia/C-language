#include <stdio.h>

int main()
{
    // int marks1 = 76;
    //   int marks = 70;
    //   int marks = 65;

    int marks[3];

    printf("Enter Physics : ");
    scanf("%d", &marks[0]);

    printf("Enter Chemistry : ");
    scanf("%d", &marks[1]);

    printf("Enter Maths : ");
    scanf("%d", &marks[2]);

    printf("Physics = %d, chemistry =  %d, Maths = %d", marks[0], marks[1], marks[2]);

    return 0;
}