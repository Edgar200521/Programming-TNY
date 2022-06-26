#include <stdio.h>

int main() {

	int a, b, c, d, e;
	printf("Input 5 numbers\n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	if (a%2==0) {
	printf("The fisrt number is %d\t\n", a);
	}
	if (b%2==0){
	printf("The second number is %d\t\n", b);
	}
	if (c%2==0){
        printf("The third number is %d\t\n", c);
        }
	if (d%2==0){
        printf("The forth number is %d\t\n", d);
        }
	if (e%2==0){
        printf("The fifth number is %d\t\n", e);
        }

	return 0;
}
