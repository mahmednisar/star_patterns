#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int num, space, i, j, k;
 
    printf("Enter a number between 1 to 9 : \n");
 
    scanf("%d", &num);
 
    space = num - 1;
 
    for (i = 1; i <= num; i++) {
        for (space = 1; space <= (num - i); space++) {
            printf(" ");
        }
 
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
 
        for (k = (i - 1); k >= 1; k--) {
            printf("%d",k);
        }
 
        printf("\n");
 
    }
 
}
 