void main()
{
    int i,j,k,n=6;

    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+(n-j);
        }
        printf("\n");
    }
}