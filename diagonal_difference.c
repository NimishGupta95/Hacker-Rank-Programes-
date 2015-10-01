#include<stdio.h>
#include<math.h>

	int mat[1000][1000];

int main()
{
	int n;

	int i,j,k;
	long int sum1 =0,sum2 = 0,diff;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum1 = sum1 + mat[i][i];
	}

	for(i=0;i<n;)
	{
		for(j=n-1;j>=0;j--)
		{
			sum2 = sum2 + mat[i][j];
			i++;
			
		}
	}

	diff = abs(sum1 - sum2);
	printf("%ld",diff);
	return 0;
	
	
}
