#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter First Number :  \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);

    if ( iValue1 > ivalue2)
    {
        printf("Maximum Number is %d",iValue1);
    }
    else
    {
        printf("Maximum Number is %d",ivalue2);
    }

    return EXIT_SUCCESS;
}