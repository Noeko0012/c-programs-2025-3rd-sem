#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *arr;
    printf("Enter array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Array: ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
