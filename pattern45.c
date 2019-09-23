#include<stdio.h>
void main()
{
    int i,j,k;
    
    for(i=1; i<=6; i++){
        
       
        for(k=1; k<=i; k++){
            printf(" %d ",k);
        }

        for(j=1; j<=6-i; j++){
            printf(" * ");
        } 
          for(j=6-i; j>=1; j--){
            printf(" * ");
        }
        
          for(j=i; j>=1; j--){
            printf(" %d ", j);
        }
        
        printf("\n");
        
    }
}
