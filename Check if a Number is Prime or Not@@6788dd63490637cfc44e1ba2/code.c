#include <stdio.h>
int main() {
    int a,b,i;
    scanf("%d",&a);
    if(a<=1){
        b=0;
    }else{
    for(i=2;i*i<=a;i++){
        if(a%i==0);{
            b=0;
            break;
        }
    }
    }
    if(b){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}