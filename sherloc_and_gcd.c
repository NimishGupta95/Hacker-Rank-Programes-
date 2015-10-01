#include<stdio.h>

int main()
{
	int test;
	int n,count=0;
	long long int in[100];
	long long int i,j,k;
	long long int min,max;
	long long int gcd = 1;
	int out[20];
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		scanf("%lld",&in[j]);
		
		min = in[0];
		for(k=1;k<n;k++)
		{
			if(in[k]<min)
			min = in[k];
		}

				
		for(j=min;j>=1;j--)
		{
		  for(k=0;k<n;k++)
		  {
		  	if(in[k]%j == 0)
		  	{
		  		count = count + 1;
		  	}
		  }
		  
		  if(count == n)
		  {
		  	gcd = j;
		  	break;
		  }
		  count = 0;
		}

		if(gcd == 1)
		{
			out[i] = 0;
		}
		else
		{
			out[i] = 1;
		}
		count = 0 ;
		gcd = 1;
		
	}
	for(k=0;k<test;k++)
	{
		if(out[k]==0)
		printf("YES\n");
		else
		printf("NO\n");	
	}

	
	return 0;
	 
}
