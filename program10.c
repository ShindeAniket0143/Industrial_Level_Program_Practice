#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////
//
//  Function Name : Scanf Return Value
//  input         : Integer , Integer
//  Output        : 1
//  Description   : Performs Return Value 1
//  Date          : 09/10/2026
//  Author        : Aniket Arjun Shinde
//
////////////////////////////////////////////////

int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter Number : \n");
    ret = scanf("%d",&no);

    printf("Return value is : %d \n",&ret);

    return EXIT_SUCCESS;
}