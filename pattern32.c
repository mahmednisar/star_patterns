#include<stdio.h>
void main(){
  
int i,j,n;
printf("Enter how many rows you want to print: ");
scanf("%d",&n);
for(i=1;i<=n; i++){
    if(i%2==0){
        for(j=1;j<=i; j++){
            printf("*");

        }
    }
    else
    {
        for(j=1;j<=i+1; j++){
            printf("*");

        }
    }
    printf("\n");
    
}
  
}