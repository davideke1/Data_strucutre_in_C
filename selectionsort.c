#include<stdio.h>
void selectionsort(int a[], int len);

int main() {
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
   selectionsort(a,n);

  printf("\nArray after sorting\n");
  for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
  return 0;
}

void selectionsort(int a[], int n) {
  
  for (int i = 0; i< n-1; i++) {
    int min_pos = i;

    for(int j = i+1; j <n;j++) {
      if (a[j] < a[min_pos]){
        min_pos = j;
      }

      if (min_pos != i){
        int temp = a[i];
        a[i] = a[min_pos];
        a[min_pos]  = temp;
      }

    }
  }
}
