#include <stdio.h>

int main() {
    int a, b, c = 1, d = 0;
    printf("Input the amount of lines: ");
    scanf("%d", &a);
    for(b = 1; b <= a; b++) {
        printf("%d %d %d\n", b, b*b, b*b*b);
      }
    return 0;
}

