#include <stdio.h>

int Array_sum(int *a, int n)
{   
	printf("n = %d\n", n);
	 
    return (n > 0) ? Array_sum(a, n-1) + a[n-1] : 0;
}

int main()
{
	int i;
    int a[100] = {0};
    
    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    	a[i] = i + 1;
    
    printf("array sum is %d\n", Array_sum(a, sizeof(a)/sizeof(a[0])));
    
    return 0;
}



