#include <stdio.h>

void bubble_sort(int *a, int aSize)
{
	int i,j;
	int temp;
	
	for (i = 0; i < aSize-1; i++) {
		for (j = i; j < aSize-i-1; j++) {
			if (a[j] > a[j+1]) {
				temp   = a[j];
				a[j]   = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	int i;
	int a[] = {0, 2, 1, 5, 3, 4, 8, 9, 7, 6};
	
	bubble_sort(a, sizeof(a)/sizeof(a[0]));
	
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) 
		printf("a[%d] = %d\n", i, a[i]);
		
	return 0;
} 












