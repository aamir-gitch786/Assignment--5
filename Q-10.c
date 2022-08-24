/******************************************************************************
10. Write a program to print a table of N.
*******************************************************************************/

#include <stdio.h>

int main()
{ int n;
printf("Enter the value of N: ");
scanf("%d",&n);
for(int i=1;i<=10;i++)
{

    printf("%d\n",n*i);
}
    return 0;
}

