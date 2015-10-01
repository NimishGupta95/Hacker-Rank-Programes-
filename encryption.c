#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	char text[100],out[20][20];

	float length;
	int rows,cols;
	int i,j,k=0;
		for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			out[i][j] = '$';
		}
	}
	scanf ("%[^\n]%*c",text);

	
	length = strlen(text);
	
	rows = floor(sqrt(length));
	cols = rows;
   l1:	while((cols * rows)<length)
	{
    /* l2 : if(rows == cols)
        goto l3;
        else
	    rows = rows +1;
        goto l1;
          
     l3: cols = cols +1;     
     */
     l2 : if(cols == rows+1)
        goto l3;
        else
        cols = cols + 1;
        goto l1;
        
     l3 : rows = rows+1;
     
	}

	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols&&k<length;j++)
		{
			out[i][j] = text[k];
			k = k+1;
		}
	}
	for(i=0;i<cols;i++)
	{
		for(j=0;j<cols;j++)
		{
		if(out[j][i] != '$')
	    printf("%c",out[j][i]);
		}
		printf(" ");
		
	}

	return 0;

}
