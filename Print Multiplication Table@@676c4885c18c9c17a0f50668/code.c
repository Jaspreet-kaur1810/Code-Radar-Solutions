#include <stdio.h>

int main() {
    int i,a;
    scanf("%d",&a);
    for (i = 1; i <= a; i++) {
        printf("a * %d = %d\n", i, 2 * i);
    }

    return 0;
}