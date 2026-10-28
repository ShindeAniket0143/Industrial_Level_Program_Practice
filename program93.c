#include<stdio.h>
#include<stdlib.h>

long int Factorial(int iNo)
{
    int iCnt = 0; 
    long int ifact = 1;

    for(iCnt = 1, ifact = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;
    }

    return ifact;
}

int main()
{
    int iValue = 0; 
    long int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %ld\n",iRet);

    return EXIT_SUCCESS;
}