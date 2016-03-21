#include <stdio.h>

int search_data_from_array(int *a, int start, int end, int data)
{
	int mid;
	
	if (start <= end)
	{
		mid = start + (end-start)/2;
		
		if (a[mid] == data)
			return mid;
		else if (a[mid] < data)
			return search_data_from_array(a, mid+1, end, data);
		else
			return search_data_from_array(a, start, mid-1, data);
	}
	else
	{
		return -1;
	}
} 

int main()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 18, 9};
	
	printf("%d\n", search_data_from_array(a, 0, 9, 18));
	
	return 0;
}



