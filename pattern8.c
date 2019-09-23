#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int i = 5;
    while (i >= 1) {
        int j = 5;
        while (j >= i) {
            printf("%d", j);
            j--;
        }
        i--;
        printf("\n");
    }
}
 