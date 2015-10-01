#include<stdio.h>

void quicksort(long long int [100000],long int,long int);

int main()
{
	long int n,k;
	long long int in[100000],unfairness = 100000000,begin,end;
	int i;
	
	scanf("%ld",&n);
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&in[i]);
	}
	
	quicksort(in,0,n-1);
	
	begin = 0;
	end = k - 1;
	
	for(;end < n;begin++,end++)
    {
        if(in[end] - in[begin] < unfairness)
            unfairness = in[end] - in[begin];
    }
    printf("%d",unfairness);
	


	return 0;
	
	
	
	
}

void quicksort(long long int x[100000],long int first,long int last){
   long int pivot,j,i;
   long long int temp;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}




