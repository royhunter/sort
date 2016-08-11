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

void print_sub(int x[], int low, int high)
{
        int i;
        printf("[");
        for(i = low; i < high; i++)
                printf("%d ", x[i]);
        printf("]\n");
}

int partition(int a[], int low, int high)
{
        int privotkey = a[low];
        while( low < high )
        {
                while(low < high && a[high] >= privotkey) high--;
                if(low != high)
                        swap(&a[low], &a[high]);
                while(low < high && a[low] <= privotkey) low++;
                if(low != high)
                        swap(&a[low], &a[high]);
        }
        return low;
}


void quicksort(int a[], int low, int high)
{
        if(low < high)
        {
                int privotLoc = partition(a,  low,  high); 
                quicksort(a, low, privotLoc - 1);
                quicksort(a, privotLoc + 1, high); 
        }
}


int main()
{

        int a[] = {5,9,7,6,1,8,13,4};
        quicksort(a, 0, 7); 
        print_sort(a, 8);
}
