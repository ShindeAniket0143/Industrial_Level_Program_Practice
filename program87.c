// Nested if Function replace of &&

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("It is Divisible");
        }
        else
        {
            printf("It is not Divisible");
        }
    }
    else
    {
        printf("It is not Divisible");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}