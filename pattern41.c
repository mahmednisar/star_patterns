#include<stdio.h>
void main()
{
    int i,j,prev1=0,prev2=0, prev3=0;
    for(i=1; i<=6; i++){
        for(j=1; j<=i+5; j++){
            if(i<=6-j){
                printf(" * ");
            }
            else
            {
                printf(" %d ", i);
            }
            



        }
        printf("\n");
        
    }
}