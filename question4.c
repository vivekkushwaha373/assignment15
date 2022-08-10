#include<stdio.h>
int* rotate(int [],int,int);
int* rotate(int arr[],int n,int size)
{   

int temp;int i=0;
    for(int k=0;k<n;k++)
    { temp=arr[0];
       for(int j=0;j<(size-1);j++)
{
           
            arr[j]=arr[j+1];
            
}    
arr[size-i-1]=temp;    
    }
    return arr;
}
int main()
{   int x,*ptr,n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position by array you want to rotate: ");
    scanf("%d",&x);
    ptr=rotate(arr,x,n);
    printf("modified array: ");
    for(int k=0;k<n;k++)
    {
      printf("%d ",ptr[k]);
    }
    return 0;
}