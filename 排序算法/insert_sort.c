#include <stdio.h>

void insert_sort(int *a, int aSize)
{
	int i,j;
	int temp;
	
	for (i = 1; i < aSize; i++) {
		temp = a[i];
		
		for (j = i-1; j >= 0; j--) {
			if (temp < a[j]) {
				a[j+1] = a[j];
			} else {
				break;
			}			
		}
		
		a[j+1] = temp;
	}
	
	return;
} 

int main()
{
	int i;
	int a[] = {0, 2, 1, 5, 3, 4, 8, 9, 7, 6};
	
	insert_sort(a, sizeof(a)/sizeof(a[0]));
	
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) 
		printf("a[%d] = %d\n", i, a[i]);
		
	return 0;	
}







