#include<stdio.h>

long long int candies[10000000];

int main()
{
long long int n,m;
long long int a,b,k;
long long int sum=0,avg;

int i,j,p,l;
scanf("%lld %lld",&n,&m);

for(j=0;j<n;j++)
candies[j] = 0;
for(i=0;i<m;i++)
{
	scanf("%lld %lld %lld",&a,&b,&k);
	for(p=a;p<=b;p++)
	{
		candies[p] = candies[p] + k;
	}	
}
for(l=1;l<=n;l++)
{
sum = sum + candies[l];	
}
avg = sum / n;
printf("%lld",avg);

return 0;

}
