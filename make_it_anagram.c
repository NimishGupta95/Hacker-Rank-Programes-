#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long int min(long int,long int);

int main()
{
	char first[100000],sec[100000];
	long int length1,length2,common=0,del;
	long int map1[26],map2[26];
	char c1,c2,c3;
	int i,j,k;
	
	
	scanf("%s",first);
	scanf("%s",sec);
	
	length1 = strlen(first);
	length2 = strlen(sec);
/*	for(c1='a';c1<='z';c1++)
	{
		map1[c1] = 0;
		map2[c1] = 0;
	}
	
	for(i=0;i<length1;i++)
	{
		c2 = first[i];
		map1[c2] = map1[c2] + 1;
	}
	for(i=0;i<length1;i++)
	{
		printf("%d ",map1[i]);
	}
	printf("\n");
	
	for(i=0;i<length2;i++)
	{
		map2[sec[i]]++;
	}
    for(i=0;i<length1;i++)
	{
		printf("%d ",map2[i]);
	}
	printf("\n");
	
	for(j=0;j<26;j++)
	{
		common = common + min(map1[j],map2[j]);
	}
	printf("%ld",common);
	*/
	for(i=0; i < strlen(first); i++) {
    for(j = 0; j < strlen(sec); j++) {
        if(first[i] == sec[j]) {
            common++;
            sec[j] = '*';
            break;
        }
    }
}
del = length1 + length2 - 2*common;
printf("%ld",del);
	
	return 0;
}


