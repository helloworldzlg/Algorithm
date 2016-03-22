#include <stdio.h>

int is_continuous(int *a, int n)
{
	int i;
	int min = -1, max = -1;
	
	for (i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			if ((min > a[i]) || (-1 == min))
			{
				min = a[i];
			}
			
			if ((max < a[i]) || (-1 == max))
			{
				max = a[i];
			}
		}
	}
	
	if (max-min < n-1)
		return 1;
	else
		return 0;
}

int main()
{
	int a[] = {8, 7, 5, 0, 6};
	int len = sizeof(a)/sizeof(a[0]);
	
	if (is_continuous(a, len))
		printf("array is continuous\n");
	else
		printf("array is not continuous\n");
		
	return 0;
}
