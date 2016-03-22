#include <stdio.h>

int main()
{
	int i;
	int x = 10;
	int n = 4;
	
	float temp = (float)x/n - (float)(n-1)/2;
	printf("%d\n", temp);
	
	if (temp == (int)temp)
	{
		for (i = 0; i < n; i++)
			printf("%d\t", (int)temp+i);
	}
	else
	{
		printf("x can't equal n data sum!\n");
	}
	
	return 0;
} 








