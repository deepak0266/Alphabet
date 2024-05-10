#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,m=1,n;
    printf("Enter the nmber of rows");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for (j=1;j<=m;j++)
        printf(" ");
        for(k=1;k<=2*i-1;k++)
        {
        if(k==n||k==2*i-1)
        printf("Y");
        else
        printf(" ");
        }
        m++;
        printf("\n");

    }
return 0;
}