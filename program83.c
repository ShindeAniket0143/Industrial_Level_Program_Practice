//  Accept Number and check whether it is divisible by 3 or not

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("It is Divisible");
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