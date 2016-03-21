#include <stdio.h>
#include <malloc.h>
#include <string.h>

int find_redata(int *a, int aSize)
{
	int i;
	int sum = 0;
	int count;
	
	for (i = 0; i < aSize-1; i++)
	{
		sum   += a[i];
		count += (i+1);
	}
	
	sum += a[aSize-1];
	
	return sum-count;
}

int find_data_map(int *a, int aSize)
{
	int i;
	int *p = (int*)malloc(aSize*sizeof(int));
	if (NULL == p)
	{
		printf("memory alloc fail!\n");
	}
	
	memset((void*)p , 0, aSize*sizeof(int));
	
	for (i = 1; i < aSize; i++)
	{
		if (1 == p[a[i]])
		{
			free(p);
			return a[i];
		}
		else
		{
			p[a[i]] = 1;
		}
	}
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
	
	printf("redata is %d\n", find_redata(a, 10));
	printf("**************\n");
	printf("redata is %d\n", find_data_map(a, 10));
	
	return 0;
}







