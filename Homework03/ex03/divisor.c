#include <stdio.h>

int main(){

int a, c;

printf("Please write a number\n");
scanf("%d", &c);
printf("\nAll divisors of %d\n", c);
for (a = 1; a<=c; a++){

if (c % a == 0){
	printf("%d\n", a);
}


}



return 0;

}
