#include<stdio.h>

int main(){
    int v, m;
    while(1){ 
        scanf("%d", &v);
        scanf("%d", &m);
        if(v > 0) { 
            printf("%d\n", v%m);
        }
        if(v < 0) {
            printf("%d\n", v%m + m);
        }
        if(v == 0){ 
        printf("%d\n", 0);
        }
    }

return 0;
}
