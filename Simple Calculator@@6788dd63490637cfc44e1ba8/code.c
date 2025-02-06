#include <stdio.h>
int main() {
    int b,c;
    char a;
    scanf("%d %d %c",&b,&c,&a);
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
        if(c!=0){
            printf("%d",b/c);
        }else{
            printf("error");
        }
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}