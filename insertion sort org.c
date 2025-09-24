#include<stdio.h>
void insertionsort(int a[],int n)
{
	int j,i;

	for(i=1;i<n;i++)
	{
		int key=a[i];
     	 j=i-1;
	  while(j>=0&&a[j]>key)
	  {
	  	a[j+1]=a[j];
	  	j=j-1;
	  }
	  a[j+1]=key;
	}
	printf("The sortd list is: ");
	for (int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	} 
}
int main()
{
	int n,i;
	printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements");
    	for (i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
		}
	insertionsort(a,n);
}