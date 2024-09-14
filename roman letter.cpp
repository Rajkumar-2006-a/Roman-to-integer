#include<stdio.h>
#include<string.h>
int main()
{
	int cur,prev=0,total=0;
	char a[100];
	scanf("%[^\n]s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		switch(a[i])
		{
			case 'I':cur=1;break;
			case 'V':cur=5;break;
			case 'X':cur=10;break;
			case 'L':cur=50;break;
			case 'C':cur=100;break;
			case 'D':cur=500;break;
			case 'M':cur=1000;break;
			default:printf("Inavalid");return 0;
		}
		if(prev<cur)
		{
			total+=cur-2*prev;
		}
		else
		{
			total+=cur;
		}
		prev=cur;
	}
	printf("%d",total);
}

