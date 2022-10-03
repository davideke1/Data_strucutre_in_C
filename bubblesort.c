#include <stdio.h>
void bubblesort (int a[], int len);

int main() {
  int a[50], i,n, num;
  printf("Enter the number of elements you want in the array --> ");
  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }
  bubblesort(a,n);
  
  printf("Array after sorting\n");
  for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
  return 0;
}

void bubblesort( int a[], int n) {

  for (int i = 0; i<n; i++){
    for (int j = 0; j <(n-1-i); j++) {
      if (a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      } 
    }
  }
}
