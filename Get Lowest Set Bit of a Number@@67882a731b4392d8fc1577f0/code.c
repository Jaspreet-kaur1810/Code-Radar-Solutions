#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d ",&a);
b=a & -a;
c=(int)(log2(b));
printf("%d",c);
    return 0;
}