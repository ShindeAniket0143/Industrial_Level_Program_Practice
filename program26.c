#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);       // can't accept the string upto user can't press enter - it's for space in string - accept space as also character

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}