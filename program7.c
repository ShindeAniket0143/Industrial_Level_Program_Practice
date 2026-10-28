/*
    Step 1 : Understand the problem statement
    Step 2 : Write the Algorithm
    Step 3 : Decide the Programming Language
    Step 4 : Write the program
    Step 5 : Test the program
*/

////////////////////////////////////////////////
//
//  Step 1 : UNderstand the problem statement
//           User is going to any 2 Integers
//           And we have to perform addition
//
////////////////////////////////////////////////

////////////////////////////////////////////////
//  Step 2 : Write the Algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as ANS to store the result
        Perform the Addition adn store into ANS
        Display the result from ANS 
    END
*/
////////////////////////////////////////////////

////////////////////////////////////////////////
//
//  Step 3 : Decide the Programming Language
//           We select C Programming 
////////////////////////////////////////////////

////////////////////////////////////////////////
//
//  Step 4 : Write the Program
//
////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////
//
//  Function Name : Addition
//  input         : Integer , Integer
//  Output        : Integer
//  Description   : Performs Addition
//  Date          : 04/10/2026
//  Author        : Aniket Arjun Shinde
//
////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // Business Logic

    return iAns;
}

////////////////////////////////////////////////
//
// Entry Point of the Appplication
//
////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iResult);

    return 0;
}