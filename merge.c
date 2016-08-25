




void MergeArray(int a[], int n, int b[], int m, int c[])
{
    int i, j, k;
    i = j = k = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }else {
            c[k++] = b[j++];
        }
    }

    while(i < n) {
        c[k++] = a[i++];
    }

    while(j < m) {
        c[k++] = b[j++];
    }
}

void MergeArray(int a[], int first, int mid, int last, int tmp[])
{
    int i = first;
    int j = mid + 1;
    int n = mid;
    int m = last;
    int k = 0;
    while(i <= n && j <= m){
        if (a[i] < a[j])
            tmp[k++] = a[i++];
        else
            tmp[k++] = b[j++];
    }

    while(i <= n)
        tmp[k++] = a[i++];

    while(j <= m)
        tmp[k++] = b[j++];

    for(i = 0;i < k; i++)
        a[first + i ] = tmp[i];
}



void mergesort(int a[], int first, int last, int tmp[])
{
    if( first < last)
    {
        int mid = (first + last)/2;
        mergesort(a, first, mid, tmp);
        mergesort(a, mid + 1, last, tmp);
        MergeArray(a, first, mid, last, tmp);
    }
}
