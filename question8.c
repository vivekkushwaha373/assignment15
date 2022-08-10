#include<stdio.h>
void unique(int []);
void unique(int arr[])
{
  int count=0;
printf("unique elements are: ");
for(int i=0;i<10;i++)
{
    int count=0;
    for(int j=0;j<10;j++)
        {if(arr[i]==arr[j] && i!=j)
        arr[j]=-1;
        else
        continue;}
        
}

for(int i=0;i<10;i++)
{
    if(arr[i]!=-1)
    printf("%d ",arr[i]);
}
}
int main()
{
int arr[10];
printf("enter the values\n ");
for(int i=0;i<10;i++)
{
    printf("enter the %d value: ",i+1);
    scanf("%d",&arr[i]);
}
 unique(arr);
    return 0;
}