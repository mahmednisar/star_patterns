 
#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int i, j, k;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; ++j)
            printf("%d", j);
 
        for (k = n - i; k >= 1; k--)
            printf("*");
 
        printf("\n");
    }
}
 