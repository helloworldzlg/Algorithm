#include <stdio.h>

int most_appearance_data(int *a, int aSize)
{
	int i;
	int count = 0;
	int candidate;
	
	for (i = 0; i < aSize; i++)
	{
		if (0 == count)
		{
			candidate = a[i];
			count = 1;
		}
		else
		{
			if (candidate == a[i])
				count++;
			else
				count--;
		}
	}
	
	return candidate;
}

int main()
{
	int a[10] = {0, 2, 2, 2, 4,
	             1, 4, 2, 2, 2};
	             
	printf("most appearance data = %d\n", most_appearance_data(a, 10));
	
	return 0;
}







