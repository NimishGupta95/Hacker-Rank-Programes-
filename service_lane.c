#include<stdio.h>
#include<conio.h>

int min(int, int, int*);

int main()
{
	long long int length;
	int test;
	int width[100000];
	int in,out;
	int i,j,k;
	int ans[100000];
	scanf("%lld %d",&length,&test);
	
	for(i=0; i<length;i++)
	scanf("%d",&width[i]);
	
	for(k=0;k<test;k++)
	{
		scanf("%d %d",&in,&out);
		j = min(in,out,width);
		ans[k] = j;
	}
	
	for(i =0;i<k;i++)
	printf("%d\n",ans[i]);
	
	return 0;
}

int min(int a,int b, int* p)
{
	int i,m;
	m = p[a];
	for(i=a+1;i<=b;i++)
	{
	 if(p[i]<m)
	 {
	 	m = p[i];
	 }
	 else
	 {
	 	continue;
	 }	
	}
	return m;
}


