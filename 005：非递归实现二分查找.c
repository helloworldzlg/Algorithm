#include <stdio.h>

int search_data_from_array(int *a, int aSize, int data)
{
	int start  = 0;
	int end    = aSize-1;
	int mid;
	
	while (start <= end) 
	{
		mid = start + (end-start)/2;
		
		if (a[mid] == data)
			return mid;
		else if (a[mid] < data)
			start = mid+1;
		else
			end = mid-1;	
	}
	
	return -1;
} 


int main()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("%d\n", search_data_from_array(a, 10, 5));
	
	return 0;
}



