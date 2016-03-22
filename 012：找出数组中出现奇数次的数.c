#include <stdio.h>

int find_data_odd_count(int *a, int aSize)
{
	int i;
	int r = a[0];
	
	for (i = 1; i < aSize; i++)
	{
		r ^= a[i];
	}
	
	return r;
}

int main()
{
	int a[] = {1, 2, 2, 3, 3, 4, 1};
	
	printf("%d\n", find_data_odd_count(a, sizeof(a)/sizeof(a[0])));
	
	return 0;
} 
