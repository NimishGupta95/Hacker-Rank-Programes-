#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* strrev (char *str);

int main()
{
	int t,length;
	char instr[10000],instr1[10000];
	char* revstr;
	int count = 0,out[10];
	int i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",instr);
		strcpy(instr1,instr);

		length = strlen(instr1);
		strrev(instr1);
		

        
		for(j=1;j<=length-1;j++)
		{
			if(abs(instr[j]-instr[j-1]) == abs(instr1[j]-instr1[j-1]))
			count = count + 1; 
		}
		if(count == length-1)
		out[i] = 1;
		else
		out[i] = 0;
		
		count = 0;	
		 
    }
    for(k = 0;k<t;k++)
    {
    	if(out[k] == 1)
    	printf("Funny\n");
    	else
    	printf("Not Funny\n");
    }
    return 0;
}
char* strrev (char *str)
{
    if (!str) { 
        fprintf (stderr, "%s() Error: invalid string\n", __func__); 
        return NULL; 
    }

    char *begin = str;
    char *end = str + strlen (str) - 1;
    char tmp;

    while (end > begin)
    {
        tmp = *end;
        *end-- = *begin;
        *begin++ = tmp;
    }

    return str;
}

