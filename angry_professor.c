#include<stdio.h>

int main()
{
	int test;
	int n,k;
	int in[1000];
	int out,ans[10];
	int i,j,l,count=0,p;
	scanf("%d",&test);
	
	for(i=0;i<test;i++)
	{
		scanf("%d %d",&n,&k);
		for(j=0;j<n;j++)
		scanf("%d",&in[j]);
		for(l=0;l<n;l++)
		{
			if(in[l]<=0)
			count++;
		}
		if(count>=k)
		ans[i]=0;
		else
		ans[i]=1;
		count =0;
	}
	for(p=0;p<i;p++)
	{
		if(ans[p]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
	
	
	
	
}
