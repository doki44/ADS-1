int cbinsearch(int *arr, int size, int value)
{
int mid = size / 2;
         if ( A[mid] == key )
            return mid;
         if ( A[mid] < key)
            BinSearch(arr, value, mid+1);
         if ( A[mid] > key )
            BinSearch(arr, value, mid-1);
}
