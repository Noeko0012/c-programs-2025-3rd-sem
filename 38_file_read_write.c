#include <stdio.h>
int main() {
    FILE *f;
    char str[100];
    f = fopen("test.txt", "w");
    printf("Enter a string: ");
    scanf(" %[^"]", str);
    fprintf(f, "%s", str);
    fclose(f);
    f = fopen("test.txt", "r");
    fgets(str, 100, f);
    printf("Read from file: %s\n", str);
    fclose(f);
    return 0;
}
