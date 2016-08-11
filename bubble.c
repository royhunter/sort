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

int main()
{
        int a[] = {5,9,7,6,1,8,13,4};

        int len = sizeof(a)/sizeof(a[0]);

        int i, j;
        int m = len;
        int sort = 0;

        for(i = 0; i < len - 1; i++)
        {
                sort = 0;
                for(j = 0; j <(m - 1 - i) ; j++)
                {
                        if(a[j] > a[j+1])
                        {
                                swap(&a[j], &a[j+1]);
                                sort = 1;
                        }
                }
                if(sort == 0)
                        break;
                print_sort(a, len);
        }

        print_sort(a, len);

        return 0;
}
