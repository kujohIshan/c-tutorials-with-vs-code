#include <stdio.h>
void merge(int a[], int low, int mid, int hi)
{
  int i, j, k, b[100];
  i = low;
  j = mid + 1;
  k = low;
  while (i <= mid && j <= hi)
  {
    if (a[i] < a[j])
    {
      b[k] = a[i];
      i++;
      k++;
    }
    else
    {
      b[k] = a[j];
      j++;
      k++;
    }
  }
  while (i <= mid)
  {
    b[k] = a[i];
    k++;
    i++;
  }
  while (j <= hi)
  {
    b[k] = a[j];
    k++;
    j++;
  }
  for (int i = low; i <= hi; i++)
  {
    a[i] = b[i];
  }
}
void mergesort(int ar[], int l, int hi)
{
  if (l < hi)
  {
    int mid = l + (hi - l) / 2;
    mergesort(ar, l, mid);
    mergesort(ar, mid + 1, hi);
    merge(ar, l, mid, hi);
  }
}

int main()
{
  int ar[50], temp, n, j;
  printf(" Enter the size of array \n");
  scanf("%d", &n);
  printf(" enter the elements in array \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  printf(" the unsorted array is \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", ar[i]);
  }
  printf("\n");
  mergesort(ar, 0, n - 1);
  printf("the sorted array is \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", ar[i]);
  }
  return 0;
}