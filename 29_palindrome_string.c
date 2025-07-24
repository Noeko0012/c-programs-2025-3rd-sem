#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, len, flag=1;
    printf("Enter a string: ");
    scanf("%s", s);
    len = strlen(s);
    for(i=0;i<len/2;i++) {
        if(s[i]!=s[len-1-i]) {
            flag=0; break;
        }
    }
    if(flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
