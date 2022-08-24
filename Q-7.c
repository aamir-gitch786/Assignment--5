/******************************************************************************
7. Write a program to print the first N even natural numbers in reverse order
*******************************************************************************/

#include <stdio.h>

int main()
{ int n;
printf("Enter the value of N: ");
scanf("%d",&n);
for(int i=2*n;i>=1;i--)
{
    if(i%2==0)
    printf("%d\n",i);
}
    return 0;
}

