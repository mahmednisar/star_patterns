#include<stdio.h>
void main()
{
    int i,j;
    for(i=6; i>=1; i--){
        for(j=6; j>=1; j--){
            if(i<j){
                printf(" * ");
            }
            else
            {
                printf(" %d ", j);
            }
        



        }
        printf("\n");
    }
}