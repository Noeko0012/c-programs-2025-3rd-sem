#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5}, *p=arr, i;
    printf("Array elements using pointer arithmetic:\n");
    for(i=0;i<5;i++)
        printf("%d ", *(p+i));
    printf("\n");
    return 0;
}
