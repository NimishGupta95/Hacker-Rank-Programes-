#include<stdio.h>
#include<math.h>

int main()
{
	long long int n,n1,n2,i,i1;
	int digit,digit1;
	long long int sumFactor = 0,sumDigits = 0;
	scanf("%lld",&n);
	n1 = n;
	n2 = n;
	
	
	while(n1 % 2 ==0)
	{
		sumFactor = sumFactor + 2;
		n1 = n1 /2;
	} 
	for(i =3;i<=sqrt(n1);i = i+2)
	{
		while(n1 % i == 0)
		{
		if(i>9)
		{
		i1 = i;
		while(i1>0)
		{
		digit1 = i1 % 10;
	    sumFactor = sumFactor + digit1;
	    i1 = i1 / 10;	
		}	
		}
		else
		{
		  sumFactor = sumFactor + i;
	    }
		n1 = n1 / i;	
		}
	}
	if(n1>2)
	{

	while(n1>0)
	{	
	 digit = n1 % 10;
	 sumFactor = sumFactor + digit;
	 n1 = n1 / 10;
}
    }
	
//	printf("%lld\n",sumFactor);
	
	
	while(n2>0)
	{
	 digit = n2 % 10;
	 sumDigits = sumDigits + digit;
	 n2 = n2 / 10;	
	}
	
//	printf("%lld\n",sumDigits);
	 
	if(sumFactor == sumDigits)
	printf("1");
	else
	printf("0");
	
	return 0;
}
