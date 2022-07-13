#include<stdio.h>
int main ()
{
    int num;
    int sum, i;
    float average;

    printf("Enter the number : ");
    for(i=0; i<5; i++){
        scanf("%d", &num);
        sum = sum  + sum;
    }
    average = sum/(float)5;

    printf("Average = %f", average);
    return 0;
     
}