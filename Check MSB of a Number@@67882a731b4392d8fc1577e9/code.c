#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    if(a>>(sizeof(a)*8-1)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}