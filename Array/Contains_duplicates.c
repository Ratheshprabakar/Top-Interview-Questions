/*Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:
Input: [1,2,3,1]
Output: true

Example 2:
Input: [1,2,3,4]
Output: false

Example 3:
Input: [1,1,1,3,3,4,3,2,4,2]
Output : true*/
#include<stdio.h>
int main()
{
	int n,flag=0,i,temp;
	int *input_array;
	input_array=(int *)calloc(100,sizeof(int));
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		if(input_array[temp]!=0)
		{
			input_array[temp]++;
			flag=1;
		}	
		else
		{
			input_array[temp]++;
			flag=0;	
		}
	}
	(flag==1)?printf("true"):printf("false");
	free(input_array);	
}
