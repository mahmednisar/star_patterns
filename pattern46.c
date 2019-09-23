#include<stdio.h>
void main()
{
    int i,j,k;
    
    for(i=1; i<=6; i++){
        
       
        for(k=0; k<i-1; k++){
            printf(" * ");
        }

       
        for(j=6; j>=1; j--){
            printf(" %d ",j);
        }
          for(j=i+1; j<=6; j++){
            printf(" %d ",j);
        }
         
        printf("\n");
        
    }
}
