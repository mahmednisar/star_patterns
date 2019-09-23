#include<stdio.h>
void main()
{
    int i,j,n=7,k;

    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
            if(j==n)
                break;
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
            if(j==n)
                break;
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
}
