//  Accept Number and check whether it is divisible by 3 & 5 both or not

/*
    -------------------------------------
                Operation &&
    -------------------------------------
    Result 1    Result 2    Final Result
    -------------------------------------
    TRUE        TRUE          TRUE 
    TRUE        FALSE         FALSE
    FALSE       TRUE          FALSE             Short Circuit Evaluation
    FALSE       FALSE         FALSE             Short Circuit Evaluation
    -------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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