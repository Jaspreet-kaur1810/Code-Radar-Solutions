#include <stdio.h>
int main() {
    int t;
    scanf("%d"&t);
    if(t>0){
        printf("Profit");
    }else if(t<0){
        printf("Loss");
    }else{
        printf("No Profit/No Loss")
    }
    return 0;
}