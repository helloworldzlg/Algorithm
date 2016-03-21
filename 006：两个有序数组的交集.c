#include <stdio.h>

int c[20];
int cSize;

void Search_intersection_1(int *a, int aSize, int *b, int bSize)
{
	int i,j;

    if ((NULL == a) || (NULL == b))
        printf("input para error!\n");
        return;

    for (i = 0; i < aSize; i++)
    {
        for (j = 0; j < bSize; j++)
        {
            if (a[i] == b[j])
            {
            	printf("%d %d\n", a[i], b[j]);
                c[cSize++] = a[i];
            }
        }
    }

    return;
}

int main()
{
	int i;
    cSize = 0;

    memset((void*)&c[0], 0, sizeof(c));

    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10] = {0, 1, 2, 3, 4, 15, 16, 17, 18, 19};

    Search_intersection_1(a, 10, b, 10);

    for (i = 0; i < sizeof(c)/sizeof(c[0]); i++)
        printf("c[%-3d] = %d\n", i, c[i]);

    return 0;
}





