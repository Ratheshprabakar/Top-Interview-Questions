/*Write a function that reverses a string. The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

You may assume all the characters consist of printable ascii characters.

 

Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
#include<stdio.h>
int main()
{
	int size,c,i;
	char temp;
	char input_array[100];
	printf("Enter the number of characters\t");
	scanf("%d",&size);
	printf("Enter the characters\n");
	for(i=0;i<size;i++)
	{
		scanf(" %c",&input_array[i]);	
	}
	input_array[size]='\0';
	c=size-1;
	printf("The Reverse string is\n");
	for(i=0;i<c;i++)
	{
		temp=input_array[i];
		input_array[i]=input_array[c];
		input_array[c]=temp;
		c--;
	}
	for(i=0;i<size;i++)
	{
		printf("%c\n",input_array[i]);
	}
	
}
