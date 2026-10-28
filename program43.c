#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{
    if ( iNo1 < iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter First Number :  \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);
    
    iResult = (iValue1 , ivalue2);

    printf("Minimum Number is : %d \n",iResult);

    return EXIT_SUCCESS;
}