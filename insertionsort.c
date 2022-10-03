#include <stdio.h>
void insertionsort (int a[], int len);

int main () {
   int a[50], i,n, num;
  printf("Enter the number of elements you want in the array --> ");
  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray before sorting\n");
  for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
   insertionsort(a,n);

   printf("\nArray after sorting\n");
  for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
  return 0;
}

void insertionsort (int a[], int n) {
  for (int i = 1; i<n; i++) {
    int key = a[i];
    int j = i-1;

    while( j >=0 && a[j] >key) {
      a[j+1] = a[j];
      j = j-1;
    }
    a[j+1] = key;
  }
}
