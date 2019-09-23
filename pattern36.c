#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=8; i++){
        for(j=1; j<=i; j++){
            if(i==8||j==1||i==j){
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