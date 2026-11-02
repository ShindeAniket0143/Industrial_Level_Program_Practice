#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if (*str >= 'a' && *str <='z')
        {
            iCountSmall++;
        }
        else        // Issue
        {
            iCountDigit++;
        }
        str++;
    }

    printf("Number of Capital Letters : %d\n",iCountCapital);
    printf("Number of Small Letters : %d\n",iCountSmall);
    printf("Number of Digits Letters : %d\n",iCountDigit);
    
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}