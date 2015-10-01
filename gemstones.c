#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	char gems[100][100];
	int i,j,k,count =0,count1=0;
	char c1;
	
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",gems[i]);	
	}
	
	for(c1 = 'a';c1<='z';c1++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<strlen(gems[j]);k++)
			{
				if(gems[j][k] == c1)
				{
					count = count + 1;
					break;
				}
			}
		}
		if(count == n)
		count1 = count1 + 1;
		
		
		count =0 ;
		
	}
	printf("%d",count1);
	return 0;
	
	
	

	
}


