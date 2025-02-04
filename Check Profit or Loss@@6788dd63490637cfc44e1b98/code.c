#include <stdio.h>
int main() {
    int t,s;
    scanf("%d %d",&t,&s);
    if(s>t){
        printf("Profit");
    }else if(t>s){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}