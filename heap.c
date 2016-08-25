



void MinHeapFixup(int a[], int i)
{
    int j, tmp;
    tmp = a[j];

    j = (i - 1)/2;
    while( j >= 0 && i != 0) {
        if(a[j] <= tmp)
            break;
        
        a[i] = a[j];
        i = j;
        j = (i - 1)/2;

    }

    a[i] = tmp;
}


void MinHeapAddNumber(int a[], int n, int nNum)
{
    a[n] = nNum;
    MinHeapFixup(a, n);
}

void MinHeapFixdown(int a[], int i, int n)
{
    int j, tmp;

    tmp = a[i];

    j = 2 * i + 1;
    while(j < n)
    {
        if ( j + 1 < n && a[j + 1] < a[j])
            j ++;
        if(a[j] >= tmp)
            break;
        a[i] = a[j];
        i = j;
        j = 2 * i + 1;
    }
    a[i] = tmp;
}



void MinHeapDeleteNumber(int a[], int n)
{
    swap(a[0], a[n-1]);
    MinHeapFixdown(a, 0, n-1);
}



void MakeMinHeap(int a[], int n)
{
    for(int i = n/2 -1; i >= 0; i--)
        MinHeapFixdown(a, i, n);
}


void MinHeapSort(int a[], int n)
{
    for(int i = n -1; i >= 1; i--)
    {
        swap(a[i], a[0]);
        MinHeapFixdown(a, 0 , i);
    }
}
