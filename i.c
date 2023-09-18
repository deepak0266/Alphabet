#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (n%2==0)
            {
                if(i==1||i==n||(i<n/2+1))
                {
                printf("I");
                }
                else
                printf(" ");
            }
            else
            {
                if(i==1||i==n||j==(n+1)/2)
                printf("I");
                else
                printf(" ");
            }
        }
        printf("\n");
    }

}