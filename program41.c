#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    if ( iNo1 > iNo2)
    {
        printf("Maximum Number is %d",iNo1);
    }
    else
    {
        printf("Maximum Number is %d",iNo2);
    }
}

int main()
{
    int iValue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter First Number :  \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);
    
    Maximum(iValue1 , ivalue2);

    return EXIT_SUCCESS;
}