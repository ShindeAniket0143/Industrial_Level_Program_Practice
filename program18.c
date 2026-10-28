#include<stdio.h>
#include<stdlib.h>

void CheckEven
        (
            int iNo     // Input Number
        )
{
    if((iNo % 2) == 0)      // business Logic
    {
        printf("Number is EVEN");
    }
    else
    {
        printf("Number is ODD");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    CheckEven(ivalue);

    return EXIT_SUCCESS;
}