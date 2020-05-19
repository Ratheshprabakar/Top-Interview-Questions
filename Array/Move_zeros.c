/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:
	1.You must do this in-place without making a copy of the array.
	2.Minimize the total number of operations.*/
#include<stdio.h>
int main()
{
	int n,i,s,temp,k=0;
	int *input_array;
	printf("Enter the array size\t");
	scanf("%d",&n);
	s=n-1;
	input_array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		if(temp==0)
		{
			input_array[s]=temp;
			s--;	
		}	
		else
		{
			input_array[k]=temp;
			k++;
		}
	}
	printf("The Resultant Array is\n[");
	for(i=0;i<n;i++)
	{
		printf("%d,",input_array[i]);
	}
	printf("]");
	free(input_array);
}
