#include<stdio.h>
void reverse(int *arr,int n)
{
	int temp;
	int i;
	for(i=0;i<(n/2);i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}
	int main()
	{
		int i;
		int arr[]={1,2,3,4,5,6,7};
		reverse(arr,7);
		for(i=0;i<7;i++)
		{
			printf("The value of element %d is %d \n",i,arr[i]);
		}
	return 0;
}
