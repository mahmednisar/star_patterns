#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=6; i++){
        for(j=1; j<=i; j++){
            if(i%2==0){
                printf(" * ");
            }
            else
            {
                printf(" %d " ,j );
            }
            
        }
        printf("\n");
    }
}