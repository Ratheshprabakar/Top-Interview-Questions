/*Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

It doesn't matter what values are set beyond the returned length.*/
#include<stdio.h>
int main()
{
	int *input_array;
	int n,i,temp,count=0;
	input_array=(int *)calloc(100,sizeof(int));
	printf("Enter the length of the array\t");
	scanf("%d",&n);
	printf("Enter the input array\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&temp);
		if(input_array[temp]==0)
		{
			input_array[temp]++;
			count++;
		}	
	}
	printf("No. of unique elements\t%d",count);
	free(input_array);
}
