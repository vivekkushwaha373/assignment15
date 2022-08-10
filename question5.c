#include<stdio.h>
int dublicate(int []);
int dublicate(int arr[])
{
for(int i=0;i<9;i++)
{
    
    
        if(arr[i]==arr[i+1])
        return arr[i];
    
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
printf("the first adjacent value in the array is: %d",dublicate(arr));
    return 0;
}