#include <stdio.h>

int main() {

	int first, second, third;
printf("Please write three numbers:\t");
scanf("%d%d%d", &first, &second, &third);

printf("\n1st number = %d,\t 2nd number = %d,\t 3rd number = %d,\t\n", first, second, third);

	if (first > second && first > third) 
	{ printf("\nThe biggest number is the first\n"); }
	else if (second > first && second > third)
	{ printf("\nThe biggest number is the second\n"); }
	else if (third > first && third > second)
	{ printf("\nThe biggest number is the third\n"); }
	else if (third == second && first == second && third == first)
	{ printf("\nThey are similar\n"); }
	else { printf ("\nNo big number\n"); }



return 0;
}
