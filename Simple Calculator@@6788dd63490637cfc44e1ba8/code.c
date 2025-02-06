#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch(a){
        case'+':
        printf(b+c);
        break;
        case'-':
        printf(b-c);
        break;
        case'*':
        printf(b*c);
        break;
        case'/':
        if (b!=0){
            printf(b/c);
        }else{
            printf("Error");
        }
        break;
        default:
        printf("Invalid Operator");
    }
    return 0;
}