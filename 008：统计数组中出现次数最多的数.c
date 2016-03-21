#include <stdio.h>
#include <string.h>


int get_max_data(int *a, int aSize)
{
	int i;
	int max = a[0];
	
	for (i = 0; i < aSize; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	
	return max;
}

int main()
{
	int i;
	int a[10] = {0, 1, 2, 3, 2, 5, 6, 2, 8, 9};
	
	int *p = malloc(4 * (1 + get_max_data(a, sizeof(a)/sizeof(a[0]))));
	if (NULL == p)
	{
		printf("memory malloc fail!\n");
	}
	
	memset((void*)p, 0, 4*get_max_data(a, sizeof(a)/sizeof(a[0])));
	
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)			
		p[a[i]]++;
		
	for (i = 0; i < (1 + get_max_data(a, sizeof(a)/sizeof(a[0]))); i++)
		printf("p[%d] = %d\n", i, p[i]);
				
	printf("max times data = %d\n", get_max_data(p, get_max_data(a, sizeof(a)/sizeof(a[0]))));
	
	free(p);
	
	return 0;
}














