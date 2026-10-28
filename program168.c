#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iCount = 0, iSum = 0, iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

                ///////// Error    

    return ;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digit : %f\n",fRet);

    return EXIT_SUCCESS;
}