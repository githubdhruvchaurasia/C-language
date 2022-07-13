#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to fill the form\n");
    }

    else(age < 17);
    {
        printf("You are not eligible to fill the form\n");
    }
return 0;
}