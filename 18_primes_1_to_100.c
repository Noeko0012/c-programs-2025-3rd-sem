#include <stdio.h>
int main() {
    int i, j, flag;
    printf("Prime numbers between 1 and 100:\n");
    for(i = 2; i <= 100; i++) {
        flag = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
