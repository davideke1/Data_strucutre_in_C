#include<stdio.h>
int binary_search(int a[],int x, int y);
int main()
{
    int a[10],i,num, n,result =0;
    printf("Enter the size of the array --> ");
    scanf("%d", &n);
    num = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }

    result = binary_search(a,0,n-1);

    if (result == -1){
        printf("Element not found");
    }
    else
    {
        printf("element found in the array");
    }
}

int binary_search(int a[], int x, int y)
 {
     int num;
     printf("\nEnter the value you would like to search ---> ");
     scanf("%d", &num);


     while(x<=y)
     {
         int mid = x+((y-x)/2);
         if (a[mid] == num)
            return mid;
        else if (a[mid] < num)
            x = mid + 1;
        else
            y = mid - 1;
     }

     if (x>y)
     {
         return -1;
     }
 }
