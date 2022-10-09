#include<stdio.h>
void merge_sort(int a[], int len);
void merge_sort_recursion(int a[], int b, int c);
void merge_sorted(int a[], int l, int m, int r);


int main() {
  int a[] = {9,7,8,5,6,3,1,4,2,0};
  int n = 10;
  printf("Before sorting \n");
  for (int i= 0; i<10; i++) {
    printf("%d ", a[i]);
  }
    printf("\n");

  merge_sort(a,n);
  printf("After sorting \n");
  for (int i= 0; i<10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}

void merge_sort(int a[], int n) {
  merge_sort_recursion(a,0,n-1);
}

void merge_sort_recursion(int a[], int l, int r) {
  if (l < r) {
    int m = l + (r-l) / 2;

    merge_sort_recursion(a,l,m);
    merge_sort_recursion(a, m+1,r);

    merge_sorted(a,l,m,r);
  }
}


void merge_sorted(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; 
      
     
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0; 
    j = 0;
    k = beg;
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
} 

