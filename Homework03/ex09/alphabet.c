#include <stdio.h>


int main(){
char a;
printf("Enter a letter:\t");
int l, u;
scanf("%c", &a);

l = ( a == 'a' || a == 'i' || a == 'e' || a == 'o' || a == 'u');
u = ( a == 'A' || a == 'I' || a == 'E' || a == 'O' || a == 'U');

if ( l || u) { printf("\nThe letter is vowel\n"); }
else { printf("\nThe letter is consanant\n"); }






return 0;
}
