#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    printf("%d \n", x % 2 == 0);
    return 0;
}
