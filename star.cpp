#include<stdio.h>
int main()
{
	int level;
	scanf("%d",&level);
	
	for(int row=0;row<level;row++)
	{
		for(int star=level+row;star>4;star--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
