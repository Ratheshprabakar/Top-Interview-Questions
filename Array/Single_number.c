/*Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4*/
#include<stdio.h>
int main()
{
	int n,i,temp,max=0;
	int *input_array;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	input_array=(int *)calloc(100,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		input_array[temp]++;
		if(temp>max)
			max=temp;	
	}
	for(i=0;i<=max;i++)
	{
		if(input_array[i]==1)	
		{			
			printf("%d",i);
			break;
		}			
	}
	free(input_array);		
}
