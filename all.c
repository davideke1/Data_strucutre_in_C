%%writefile mergesort.cpp

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


#include <stdio.h>
void print(int [], int);
int linearsearch (int[], int);
int binarysearch (int [], int, int);
void bubblesort (int [], int);
void selectionsort (int [], int);
void insertionsort(int [], int);

int n;
int main()
{
    printf("Enter the array size of the array -->");
    scanf("%d", &n);
    int a[n],i,num,res;
    
    for (i=0; i<n; i++) {
        printf("Enter the value for index %d ---> ", i);
        scanf("%d", &a[i]);
    }
    
    // res = linearsearch(a,n);
    // res = binarysearch(a,0,n-1);
    //bubblesort(a,n);
    //selectionsort(a,n);
    insertionsort(a,n);
    print(a,n);
    
    // if (res == -1) {
    //     printf("\nElement is not present in the array");   
    // }
    
    // else {
    //     printf("\nElement is present in the array");   
    // }
    
    
    return 0;
}

void print(int a[], int n) {
    for (int i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
}


int linearsearch(int a[], int x) {
    int i, num;
    printf("-->");
    scanf("%d", &num);
    
    for(i=0; i<x; i++) {
        if( a[i] == num) {
            return i+1;
        }
    }
    return -1;
}

// binary search

int binarysearch(int a[], int x, int y) {
    int num;
    printf("-->");
    scanf("%d", &num);
    
    while (x<=y) {
        int mid = x + ((y-x)/2);
        if (a[mid] == num) {
            return mid;
        }
        else if (a[mid] < num) {
            x = mid +1;
        }
        
        else {
            y = mid -1;
        }
        
    }
    return -1;
}

void bubblesort(int a[], int x) {
    for(int i = 0; i<n; i++){
        for (int j= i+1; j< n; j++) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void selectionsort(int a[], int n) {
    for (int i = 0; i< n-1; i++) {
        int small = i;
        for (int j = i+1; j<n ;j++) {
            if (a[j]< a[small]) {
                small = j;
            }
            
            if (small != i) {
                int temp = a[i];
                a[i] = a[small];
                a[small] = temp;
            }
        }
    }
}

void insertionsort( int a [], int n) {
    for (int i = 1; i<n; i++) {
        int key = a[i];
        int j = i-1;
        
        while(j>=0 && a[j]> key) {
            a[j+1] = a[j];
            j = j-1;
        }
        
        a[j+1] = key;
    }
}

%%writefile mergesort.cpp

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


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node {
        int data;
        struct node *next;
    };
void beginsert(struct node **head_ref);  
void main()
{
    
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice;
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        printf("Enter Data --> ");
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;
        
        if (head == NULL) {
            head= temp = newnode;
        }
        
        else {
            temp-> next = newnode;
            temp = newnode;
        }
        
        printf("\nDo you want ot continue(0,1) --> ");
        scanf("%d", &choice);
    }
    
    beginsert(&head);
    
    temp = head;
     while (temp != NULL) {
         printf("%d ", temp -> data);
         temp = temp -> next;
     }

}

void beginsert(struct node **head_ref) {
    struct node *newnode;
    int value;
    newnode = (struct node *)malloc(sizeof(struct node *));
    if (newnode == NULL) {
        printf("Overflow");
    }
    
    else {
        printf("\nEnter Value\n");
        scanf("%d", &newnode -> data);
        newnode -> next = *head_ref;
        *head_ref = newnode;
        printf("\nNew node inserted\n");
    }
}

#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  
void main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n  
        5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            randominsert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            random_delete();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break;  
            case 9:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
      
}  
void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}  
void randominsert()  
{  
    int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted");  
    }  
}  
void begin_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void last_delete()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
