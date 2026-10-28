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

int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;          // Business Logic

    printf("%d\n",iResult);

    return 0;
}