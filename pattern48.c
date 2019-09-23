#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=7; i++){
        for(j=1; j<=7; j++ ){
            if(i==j){
                printf("%d",j);
            }
            else if(i==8-j){
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}