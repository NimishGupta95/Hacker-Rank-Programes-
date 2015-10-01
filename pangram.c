#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[10000];
	int length,i,j,k,count = 0;
	char c1,c2;
	scanf ("%[^\n]%*c", s);
	
	length = strlen(s);
	for(c1 = 'a',c2='A';c1<='z',c2<='Z' ;c1++,c2++)
	{
	 for(i=0;i<length;i++)
	 {
	 	if(s[i] == c1 || s[i] == c2)
	 	{
	 	 count = count+1;
		  break;	
	 	}
	 }	
	}
	
    if(count == 26)
	printf("pangram");
	else
	printf("not pangram"); 

	return 0;

}
