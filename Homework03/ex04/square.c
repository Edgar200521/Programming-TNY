#include <stdio.h>

int main(){

int s, b;

printf("Write a number to count the square by #\n");
scanf("%d", &s);
b = 1;

if (s < 1 || s > 10){ printf("Please write a number between 1-10");}
else {
while(b <= s*s){
	printf("#");
	b++; }
}

return 0;

}
