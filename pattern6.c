
#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int rows, i, j, k = 1;
 
    rows = 4;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", k++);
        printf("\n");
    }
}
 