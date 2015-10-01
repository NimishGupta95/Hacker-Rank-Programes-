#include<stdio.h>

int main()
{
	int test;
	long long int n,n1;
	int i,j,k,p1,p2;
	int out[20];
	long long int in[20];
	int count = 0;
	scanf("%d",&test);
	
	for(i=0;i<test;i++)
	{
		scanf("%lld",&n);
		in[i] = n;
		if(n%3==0)
		out[i]=0;
		else
		{
			n1 = n;
			while(n1%3!=0)
			{

				n1 = n1 - 5;
				if(n1<0)
				{
					count = -1;
					break; 
				}
				count = count + 1;
				
			}
			out[i] = count;
			count =0;
		}
	}
	for(j=0;j<test;j++)
	{
	 n1 = in[j];
	 k = out[j];
	 if(k==-1)
	 {
	 printf("-1");
	 printf("\n");
     }
	 else
	 {
	 for(p1=1;p1<=n1-(k*5);p1++)
	 {
	 	printf("5");
	 }
	 for(p2=1;p2<=(k*5);p2++)
	 {
	 	printf("3");
	 }
	 printf("\n");	
	}
}
	
	return 0;
}
