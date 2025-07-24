#include <stdio.h>
int main() {
    char s[200];
    int v=0, c=0, d=0, w=0, i;
    printf("Enter a string: ");
    fgets(s, 200, stdin);
    for(i=0;s[i]!='\0';i++) {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) {
            char ch = s[i]|32;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        } else if(s[i]>='0'&&s[i]<='9') d++;
        else if(s[i]==' ') w++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nWhite spaces: %d\n", v, c, d, w);
    return 0;
}
