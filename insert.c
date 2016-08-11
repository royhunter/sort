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



void insert_sort(int x[], int len)
{
        int i,j;
        int temp;
        for(i = 1; i < len; i++)
        {
                temp = x[i];
                for(j = i-1; j >= 0; j--)
                {
                        if(temp < x[j])
                        {
                                x[j+1] = x[j];
                                x[j] = temp;
                        }
                }
        }
}

int main()
{

        int a[] = {5,9,7,6,1,8,13,4};

        int len = sizeof(a)/sizeof(a[0]);

        insert_sort(a, len);

        print_sort(a, len);

        return 0;
}
