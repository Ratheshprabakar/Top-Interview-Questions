/*Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Note:
You may assume the string contains only lowercase alphabets.

*/
#include<stdio.h>
int main()
{
	char s[100],t[100];
	static int hash1[27],hash2[27];
	int i,flag=1;
	printf("Enter the string s\t");
	gets(s);
	printf("Enter the string t\t");
	gets(t);
	for(i=0;i<strlen(s);i++)
	{
		hash1[s[i]-'a'+1]++;	
	}
	for(i=0;i<strlen(t);i++)
	{
		hash2[t[i]-'a'+1]++;	
	}
	for(i=0;i<strlen(t);i++)
	{
		if(hash2[t[i]-'a'+1]!=hash1[t[i]-'a'+1])
		{
			printf("false");
			flag=0;
			break;	
		}	
	}
	if(flag==1)
	{
		printf("true");	
	}

}
