#include <stdio.h>
int main() {
    int a, b, x, y, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    a = x; b = y;
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("GCD: %d\nLCM: %d\n", gcd, lcm);
    return 0;
}
