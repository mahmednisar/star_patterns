#include<stdio.h>
void main(){
    int i,j,d;
    for(i=1;i<=6;i++){
        int n=5,d=5;;
        for(j=1;j<=i; j++){
            if(j==1){
                printf(" %2d ",i);
            }
            else
            {
               d=i+d;
                printf(" %2d ",d);
                
              d=d+n-i-1;
            }
            
        }
        printf("\n");
    }
}