#include <stdio.h>
int partition (int*, int, int); 
void quick(int*, int, int);
void printArr(int*, int);  
 


int main()  
{  
    int a[50], i,n, num;
  printf("Enter the number of elements you want in the array --> ");
  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    quick(a, 0, n - 1);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
      
    return 0;  
}
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
} 

  
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
} 
  
 
void quick(int a[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end); 
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  
