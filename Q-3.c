/******************************************************************************
3. Write a program to print the first N natural numbers in reverse order
*******************************************************************************/

#include <stdio.h>

int main()
{int n,i;
printf("Enter the value of N :");
scanf("%d",&n);
i=n;
while(i>=1)
{
    printf("%d\n",i);
    i--;
}
    return 0;
}

