#include <stdio.h>

int main() {
    int i,a;
    scanf("%d",&a);
    for (i = 1; i <= a; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    

    return 0;
}