/*Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
#include<stdio.h>
int main()
{
	long int num,temp;
	int rem,count=0,flag=0;
	printf("Enter the number\t");
	scanf("%ld",&num);
	if(num<0)
	{
		num*=-1;
		flag=1;	
	}
	temp=num;
	while(num>0)
	{
		rem=num%10;
		count++;
		num=num/10;	
	}
	num=0;
	while(temp>0)
	{
		rem=temp%10;
		num+=rem * pow(10,count-1);
		count--;
		temp=temp/10;	
	}
	(flag==1)?printf("The Reverse Integer is \t%ld",num*-1):printf("The Reverse Integer is\t%ld",num*1);
	
	

}

