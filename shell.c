#include <stdio.h>



void print_sort(int x[], int len)
{
        int i;
        printf("[ ");
        for(i = 0; i < len; i++)
                printf("%d ", x[i]);
        printf("]\n");
}


void shell_insert(int x[], int len, int step)
{
        int i,j,temp;
        for(i = step; i < len; i++)
        {
                temp = x[i];
                for(j = i-step; j >= 0; j -= step)
                {
                        if(temp < x[j])
                        {
                                x[j + step] = x[j];
                                x[j] = temp;
                        }
                }
        }
}



void shell_sort(int x[], int len)
{
        int step = len/2;
        while(step >= 1)
        {
                shell_insert(x, len, step);
                step = step/2;
        }
}




int main()
{
        int a[] = {5,9,7,6,1,8,13,4};
        int len = sizeof(a)/sizeof(a[0]);
        shell_sort(a, len);
        print_sort(a, len);
}
