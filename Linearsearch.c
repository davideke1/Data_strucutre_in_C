#include<stdio.h>
int linear_search(int[],int);

int main() {  
    int a[10],i,num, n,res;
    printf("Enter the size of the array --> ");
    scanf("%d", &n);
    num = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }
    
    res = linear_search(a,n);
    if (res == -1)
    {
       printf("\nElement is not present in the array");   
    }
    else  
    {
       printf("\nElement is present at %d position of array", res); 
    }
    
    return 0;  
}

int linear_search(int a[], int n)
{
    int i, num;
    printf("\nEnter the value you would like to search ---> ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)  
    {  
        if (a[i] == num)  
        return i+1;  
    }  
  return -1;  
}
 
