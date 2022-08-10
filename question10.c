#include<stdio.h>
void frequency(int []);
void frequency(int arr[])
{
  int count=1;

for(int i=0;i<10;i++)
{
    count=1;
    for(int j=0;j<10;j++)
        {if(arr[i]==arr[j] && i!=j )
        {
        count++;
        arr[j]=-99999;
        }
        
        }
      if(arr[i]!=-99999)
      printf("frequency of %d is %d: \n",arr[i],count);  
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
 frequency(arr);
    return 0;
}