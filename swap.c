#include <stdio.h>
#include <stdlib.h>

void swap_max(int arr[],int l,int n)
{
  int temp;
  int max=n;
  for (int i=n;i<l;i++)
  {
    if(arr[i]>arr[max])
    {
      max=i;
    }
  }
   temp=arr[max];
  arr[max]=arr[n];
  arr[n]=temp;
}

void ssort(int arr[],int l)
{
    for(int i=0;i<l;i++)
    {
    swap_max(arr,l,i);
    }
    for(int i=0;i<l;i++){
    printf("|%i|",arr[i]);
    }
}
