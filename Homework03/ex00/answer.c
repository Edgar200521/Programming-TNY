#include <stdio.h>

int main()
{
    float a, b, c, flag = 0;

    printf("Enter values for a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);

    if( a>b && a>c )
    {
        flag = ((b+c) > a);
    }
    else if( b>c )
    {
        flag = ((a+c) > b);
    }
    else
    {
        flag = ((a+b) > c);
    }

    if(flag)
    {
	float diameter;
	diameter  = a+b+c;
        printf("Perimeter is%f\t\n", diameter);
    }
    else
    {
        printf("Not possible to creat a triangle\n");
    }

    return 0;
}

