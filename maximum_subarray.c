#include<stdio.h>

long long int max(long long int,long long int);
long long int maximum(long long int*,long int);
int minimum(int*,long int);

int main()
{
	int test;
	long int n;
	int in[100000];
	long long int s[100000];
	long long int sum = 0,out1[10],out2[10],max1,min1;
	int i,j,k,p,q;
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%ld",&n);
		for(j=1;j<=n;j++)
		scanf("%d",&in[j]);
		s[0]=0;
		for(k=1;k<=n;k++)
		{
			s[k] = max(s[k-1]+in[k],in[k]);
		}
		max1 = maximum(s,n); 
		for(p=1;p<=n;p++)
		{
			if(in[p]>=0)
			sum = sum + in[p];
			else
			continue;
		}
		if(sum == 0)
		{
		min1 = minimum(in,n);
		out2[i] = min1;
	    }
	    else
	    out2[i] = sum;
	    
		
		out1[i] = max1;
		sum = 0;
		
	}
	for(q=0;q<test;q++)
	{
		printf("%lld %lld",out1[q],out2[q]);
		printf("\n");
	}
	
	
}

long long int max(long long int a1,long long int a2)
{
	if(a1>=a2)
	return a1;
	else
	return a2;
}
long long int maximum(long long int* p,long int size)
{
	long  long int max = p[1];
	int i;
	for(i=2;i<=size;i++)
	{
		if(p[i]>max)
		max = p[i];
	}
	return max;
}
int minimum(int* p,long int size)
{
	long  long int min = p[1];
	int i;
	for(i=2;i<=size;i++)
	{
		if(p[i]>min)
		min = p[i];
	}
	return min;
}
