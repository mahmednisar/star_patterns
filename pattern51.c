#include<stdio.h>
void main()
{
    int i,j,n=5,k=1;
    int a=n*n+1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i+i-2;j++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%2d *",k);
            k=k+1;
        }
        int temp=a;
        for(j=i;j<=n;j++)
        {
            printf("%2d ",a);
            a=a+1;
            if(j==n)
                break;
            else
            {
                printf("*");
            }
            
            
        }
        a=temp-n+i;
        printf("\n");
    }
}
