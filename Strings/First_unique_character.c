/*Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/
#include<stdio.h>
int main()
{
	char input_array[100];
	static int temp_array[27];
	int i,j,flag=0;
	printf("Enter the string\n");
	gets(input_array);
	for(i=0;input_array[i]!='\0';i++)
	{
		temp_array[input_array[i]-'a'+1]++;	
	}
	for(i=0;input_array[i]!='\0';i++)
	{
		if(temp_array[input_array[i]-'a'+1]==1)
		{	
			flag=1;
			printf("%d",i);
			break;	
		}	
	}
	if(flag==0)
	{
		printf("-1");	
	}

}
