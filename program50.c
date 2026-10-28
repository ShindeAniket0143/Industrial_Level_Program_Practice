#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2, int iNo3, int iNo4)
{
    if(( iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4))
    {
        return iNo1;
    }
    else if ((iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo4))
    {
        return iNo2;
    }
    else if ((iNo3 < iNo1) && (iNo3 < iNo2) && (iNo3 < iNo4))
    {
        return iNo3;
    }
    else 
    {
        return iNo4;
    }
}

int main()
{
    int iValue1 = 0, ivalue2 = 0, iValue3 = 0, ivalue4 = 0, iResult = 0;

    printf("Enter First Number :  \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);
    
    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    printf("Enter Forth Number : \n");
    scanf("%d",&ivalue4);
    
    iResult = Minimum(iValue1, ivalue2, iValue3, ivalue4);

    printf("Minimum Number is : %d\n",iResult);

    return EXIT_SUCCESS;
}