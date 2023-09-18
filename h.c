#include <stdio.h>
#include<conio.h>
void main()
{
    int  i,j,n;
    printf("Enter the Odd number only");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n||i==(n+1)/2)
            printf("H");
            else 
            printf(" ");
        }
        printf("\n");
    }
}