#include <stdio.h>

int is_array_increase(int *a, int n)
{
	printf("n = %d\n", n);
	
    if (n > 1)
        return (a[n-1] > a[n-2]) ? is_array_increase(a, n-1) : -1;
    else
        return 0;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 10};
    
    printf("increase flag = %d\n", is_array_increase(a, sizeof(a)/sizeof(a[0])));
    
    return 0;    
}
