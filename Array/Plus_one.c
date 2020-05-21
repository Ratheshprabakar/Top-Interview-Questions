/*Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
*/
#include<stdio.h>
int main()
{
	int size,i;
	int *input_array;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size * sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);	
	}

	if(input_array[size-1]>=0 &&input_array[size-1]<=8)
	{
			input_array[size-1]++;	
	}
	else
	{
		input_array[size-1]=0;
		for(i=(size-1)-1;i>=0;i--)
		{
			if(input_array[i]>=0 && input_array[i]<=8)
			{
				input_array[i]++;
				break;	
			}	
			else
			{
				input_array[i]=0;
			}
		}
	}
	if(input_array[0]==0)
	{
		   size=size+1;
		   input_array = (int *)realloc(input_array, sizeof(int)*size);
		   input_array[0]=1;
		   input_array[size-1]=0; 
	}
	printf("The Plus one array is\n");	
	for(i=0;i<size;i++)
	{
		printf("%d",input_array[i]);	
	}
	


}
