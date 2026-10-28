#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;
    
    fAns = ((float)iNo1 + (float)iNo2) / 2;

    return fAns;
}

int main()
{
    int iValue1 = 0, ivalue2 = 0; 
    float fResult = 0.0f;

    printf("Enter First Number :  \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);
    
    fResult = Average(iValue1, ivalue2);

    printf("Average is : %f \n",fResult);

    return EXIT_SUCCESS;
}