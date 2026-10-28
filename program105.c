#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0, bRet = 0;
    
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("It is perfect Number");
    }
    else
    {
        printf("It is not a perfect Number");
    }
    
    return EXIT_SUCCESS;
}