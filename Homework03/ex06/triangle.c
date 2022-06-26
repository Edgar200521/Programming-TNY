#include <stdio.h>

int main() {

int a, b, c;
printf("\nType the sizes of sides of a triangle:\n");
scanf("%d%d%d", &a, &b, &c);


if (a+b >= c && b+c >= a && a+c >= b) {


if (a == b || a == c || b == c) {
	printf("\nThe triangle is isosceles\n");
}
else if (a != b && b != c && a != c){
	printf("\nThe triangle is scalene\n");
}
else if (a == b && a == c && b == c){
	printf("\nThe triangle is eqilateral\n");
}
} else
{ printf(" The triangle is not possible with sides \n");
}
return 0;
}

