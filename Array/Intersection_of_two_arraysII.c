/*Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Note:

Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.
Follow up:

What if the given array is already sorted? How would you optimize your algorithm?
What if nums1's size is small compared to nums2's size? Which algorithm is better?
What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
*/
#include<stdio.h>
int main()
{
	int size1,size2,i,j=0,temp,max1=0,max2=0,min1=999,min2=999,k;
	int *input_array1,*input_array2,*temp_array;
	printf("Enter the size of the array 1\t");
	scanf("%d",&size1);
	printf("Enter the size of the array 2\t");
	scanf("%d",&size2);
	input_array1=calloc(100,sizeof(int));
	input_array2=calloc(100,sizeof(int));
	printf("Enter the nums1 elements\n");
	for(i=0;i<size1;i++)
	{	
		scanf("%d",&temp);
		input_array1[temp]++;
		if(max1<temp)
		{
			max1=temp;	
		}
		if(min1>temp)
		{
			min1=temp;	
		}
	}
	printf("\nEnter the nums2 elements\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&temp);
		input_array2[temp]++;
		if(max2<temp)
		{
			max2=temp;	
		}
		if(min2>temp)
		{
			min2=temp;	
		}
	}
	if(size1<=size2)
	{
		j=0;
		temp_array=(int *)malloc(size2*sizeof(int));
		for(i=min1;i<=max1;i++)
		{
			if(input_array1[i]!=0 && input_array2[i]!=0)
			{
				if(input_array1[i]<=input_array2[i])
				{
					for(k=0;k<input_array1[i];k++)
					{
						temp_array[j]=i;
						j++;
					}					
					
				}
				else
				{
					for(k=0;k<input_array2[i];k++)
					{
					temp_array[j]=i;
					j++;	
					}
				}	
			}		
		}		
	}
	else
	{
		j=0;
		temp_array=(int *)malloc(size1*sizeof(int));
		for(i=min2;i<=max2;i++)
		{
			if(input_array1[i]!=0 && input_array2[i]!=0)
			{
				if(input_array1[i]<=input_array2[i])
				{
					for(k=0;k<input_array1[i];k++)
					{
						temp_array[j]=i;
						j++;
					}					
					
				}
				else
				{
					for(k=0;k<input_array2[i];k++)
					{
					temp_array[j]=i;
					j++;	
					}
				}		
			}			
		}
	}
	printf("The RESULTANT ARRAY is\n[");
	for(i=0;i<j;i++)
	{	
		printf("%d,",temp_array[i]);	
	}
	printf("]");
	free(input_array1);
	free(input_array2);
	free(temp_array);
}
