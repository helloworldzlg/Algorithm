#include <stdio.h>

int search_data_from_array(int *a, int aSize, int data, int isLeft)
{
	int left  = 0;
	int right = aSize-1;
	int mid;
	int last;
	
	while (left <= right) 
	{
		mid = left + (right-left)/2;
				
		if (a[mid] < data)
			left = mid+1;
		else if (a[mid] > data)
			right = mid-1;
		else
		{
			last = mid;
			
			if (isLeft)
			{
				right = mid-1;
			}
			else
			{
				left = mid+1;
			}
		}	
	}
	
	return (last > 0) ? last : -1;
} 

int main()
{
	int a[10] = {0, 1, 2, 5, 5, 5, 5, 5, 8, 9};
	
	int first,last;
	
	first = search_data_from_array(a, 10, 5, 1);
	last  = search_data_from_array(a, 10, 5, 0);
	
	printf("%d\n", last-first+1);
	
	return 0;
}




