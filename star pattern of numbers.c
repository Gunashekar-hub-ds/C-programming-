#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Input number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		/*print blank space*/
		for(j=1;j<=n;j++)
		printf(" ");
		/*Numbers in ascending order*/
		for(j=1;j<=i;j++)
		printf("%d",j);
		/*reverse order*/
		for(j=i-1;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
}
