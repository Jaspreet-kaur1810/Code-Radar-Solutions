#include <stdio.h>
int main() {
    int b,c;
    char a;
    if(scanf("%c %d %d",&a,&b,&c)!=3){
        printf("Error");
    }
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