#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=6; i++){
        for(k=1; k<=6-i; k++){
            printf(" * ");
        }
           for(j=1; j<i; j++){
            printf(" %d ",j);
        }
        for(j=i; j>=1; j--){
            printf(" %d ",j);
        }
       
        printf("\n");
        
    }
    for(i=1; i<6; i++){
        for(k=1; k<=i; k++){
            printf(" * ");
        }

        for(j=1; j<=6-i; j++){
            printf(" %d ", j);
        }

          for(j=6-i-1; j>=1; j--){
            printf(" %d ",j);
        }
        
         
        printf("\n");
        
    }
}
