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
        if(c!=0){
            printf("%d",b/c);
        }else{
            printf("Error:Division by zero");
        }
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}