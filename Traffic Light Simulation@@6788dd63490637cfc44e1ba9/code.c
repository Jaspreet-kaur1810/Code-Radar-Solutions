#include <stdio.h>
int main() {
    int light;
    scanf("%d",&light);
    switch(light){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go"):
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");

    }

    return 0;
}