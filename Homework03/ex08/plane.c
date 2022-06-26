#include <stdio.h>

int main(){

int x, y;
printf("Type coordinates for X any Y:  \n");
scanf("%d%d", &x, &y);

	if (x > 0 && y > 0)
	{ printf("\nThe coordinate (%d, %d) is in the first quadrant\n", x, y);}
	else if (x < 0 && y > 0)
	{ printf("\nThe coordinate (%d, %d) is in the second quadrant\n", x, y);}
	else if (x < 0 && y < 0)
	{ printf("\nThe coordinate (%d, %d) is in the third quadrant\n", x, y);}
	else if (x > 0 && y < 0)
	{ printf("\nThe coordinate (%d, %d) is in the forth quadrant\n", x, y);}
	else { printf("\nThe xy plane doesn't containt that coordinates.\n");}



return 0;
}
