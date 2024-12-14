#include<stdio.h>
float square(float x);
int main()
{
	float m,n;
	printf("\n enter a number for finding square:");
	scanf("%f",m);
	n=square(m);
	printf("\n square of given number %f is %f",m,n);
}
float square(float x)
{
	float square;
	square=x*x;
	return(square);
}
