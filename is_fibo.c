#include<stdio.h>
#include<math.h>

int perfect(long long int);

int main()
{
	long long int test,n;
	int i,j,k;
	int out[100000];
	int isperfect1,isperfect2;
	
	scanf("%lld",&test);
	for(i=0;i<test;i++)
	{
		scanf("%lld",&n);
		isperfect1 = perfect((5*(n*n))+4);
		isperfect2 = perfect((5*(n*n))-4);
		if(isperfect1 || isperfect2)
		{
			out[i] = 1;
		}
		else
		{
			out[i] = 0;
	    }
	}
	for(j=0;j<test;j++)
	{
		k = out[j];
		if(k==1)
		printf("IsFibo");
		else
		printf("IsNotFibo");
		printf("\n");
		
	}
	return 0;
}

int perfect(long long int x)
{
long long int s;
s = sqrt(x);
if(s*s == x)
return 1;
else
return 0;
}

