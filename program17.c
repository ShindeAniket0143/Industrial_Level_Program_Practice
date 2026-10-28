#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    if((ivalue % 2) == 0)
    {
        printf("Number is EVEN");
    }
    else
    {
        printf("Number is ODD");
    }

    return EXIT_SUCCESS;
}