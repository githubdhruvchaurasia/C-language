#include <stdio.h>
int main()
{
    int Alpbhabet;
    int CodingLanguage;

    printf("Enter the Alpbhabet : ");
    scanf("%d", &Alpbhabet);

    switch (Alpbhabet)
    {
    case 1:
        printf("Appearaence \nAcer \n");
        break;

    case 2:
        printf("Boolean Logic \n");
        break;

    case 3:
        printf("Code \n");
        break;

    case 4:
        printf("Do Code \n");
        break;

    default:
        printf("We don't know. Sorry! \n");
    }
    return 0;
}