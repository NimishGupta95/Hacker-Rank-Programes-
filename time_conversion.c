#include<stdio.h>

int main()
{
	char s[20];
	scanf("%s",s);
	
	if(s[8] == 'P' && !(s[0]=='1' && s[1] == '2'))
	{
		s[0] = s[0] + 1;
		s[1] = s[1] + 2;
	}
	else if(s[8] == 'A' && s[0] == '1')
	{
		s[0] = s[0] - 1 ;
		s[1] = s[1] - 2;
	}
	printf("%c%c%c%c%c%c%c%c",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7]);
	
	return 0;
	
}
