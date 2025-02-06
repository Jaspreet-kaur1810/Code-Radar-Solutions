#include <stdio.h>
int main() {
    int b,c;
    char a;
    scanf("%c %d %d",&a,&b,&c);
    switch(a){
        case'+':
        printf("%d",b+c);
        break;
        case'-':
        printf("%d",b-c);
        break;
        case'*':
        printf("%d",b*c);
        break;
        case'/':
        printf("%d",b/c);
        break;
        default:
        printf("Error");
    }
    return 0;
}