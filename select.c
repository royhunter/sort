#include <stdio.h>



void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void print_sort(int x[], int len)
{
    int i;
    printf("[ ");
    for(i = 0; i < len; i++)
        printf("%d ", x[i]);
    printf("]\n");
}

int minkey(int x[], int len, int i)
{
    int k = i;
    int j;
    for(j = i + 1; j < len; j++)
    {
        if( x[k] > x[j]) k = j;
    }
    return k;
}

void select(int x[], int len)
{
    int i, k;
    for(i = 0; i < len; i++)
    {
        k = minkey(x, len, i);
        if(k != i)
        {
            swap(&x[i], &x[k]);
        }
    }
}

int main()
{
    int a[] = {5,9,7,6,1,8,13,4};

    int len = sizeof(a)/sizeof(a[0]);
    select(a, len);

    print_sort(a, len);

}
