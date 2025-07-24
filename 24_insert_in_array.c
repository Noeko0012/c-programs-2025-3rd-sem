#include <stdio.h>
int main() {
    int n, pos, val, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position and value to insert: ");
    scanf("%d %d",&pos,&val);
    for(i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=val;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
