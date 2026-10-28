#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrom(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = 0;

    iTemp = iNo;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if (iRev == iTemp)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    
    return (iRev == iTemp);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPalindrom(iValue);

    return EXIT_SUCCESS;
}