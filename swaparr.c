#include<stdio.h>
#include<string.h>
int main()
{
	int arr[20];
	int i=0,j,k=0;
	int *p,*q;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		k++;
	}
	p=arr;
	q=arr;
	i=0;
	j=k-1;
	while(i<=j)
	{
         if(*(p+i)==0)
	 {
		 if(*(q+j)==0)
			 j--;
            *(p+i)=*(q+j);
	    *(q+j)=0;
	    j--;
	}
	 i++;
	}
	for(i=0;i<10;i++)
		printf("%d\n",arr[i]);
}
