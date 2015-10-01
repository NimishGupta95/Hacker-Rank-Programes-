#include<stdio.h>

int main()
{
	int test;
	long long int b,w;
	long long int x,y,z;
	long long int ans[10],out;
	int i, k, j;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%lld %lld",&b,&w);
		scanf("%lld %lld %lld",&x,&y,&z);
		if(x>y+z)
		{
			out = w*y + b*(y+z); 
		}
		else if(y>x+z)
		{
			out = b*x + w*(x+z);
		}
		else
		{
			out = b*x + w*y;
		}
		ans[i] = out; 
		
	}
	for(j=0;j<i;j++)
	{
		printf("%lld\n",ans[j]);
	}
	return 0;
	
}
