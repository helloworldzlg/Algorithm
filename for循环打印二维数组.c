#include <stdio.h>

void Array_print_1(int *a, int row, int column)
{
    int i,j;
    
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            printf("a[%d][%d] = %d\n", i, j, a[j+i*column]);
        
    return;    
}

void Array_print_2(int *a, int size, int column)
{
    int i;
    
    for (i = 0; i < size; i++)
        printf("a[%d][%d] = %d\n", i/column, i%column, i);
    
    return;
}

int main()
{
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    
    printf("mode 1! **********\n");
    Array_print_1(a, 2, 3);
    printf("mode 2! **********\n");
    Array_print_2(a, 6, 3);
    
    return 0;
}
