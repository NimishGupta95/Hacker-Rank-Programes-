#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int test,length,mid,length1,length2,count;
	char string[10001],string1[10001],string2[10001];
	int i,j,k,l,p,q,r,x,y,z;
	int hash1[26],hash2[26];
	scanf("%d",&test);
	for(i=0; i<test; i++){
		count = 0;
		l = 0;
		for(r = 'a'; r <= 'z'; r++){
			hash1[r] = 0;
			hash2[r] = 0;
		}
		scanf("%s",string);
		length = strlen(string);
		for(z=0 ;z<length; z++){
			string1[z] = 0;
			string2[z] = 0;
		}
		if(length % 2 != 0){
			printf("-1");
			printf("\n");
		}else{
			for(j=0; j<=((length/2)-1); j++){
				string1[j] = string[j];
			}
			string1[j] = '\0';
			
			for(k=(length/2); k<length; k++){
				string2[l] = string[k];
				l++;
			}
			string2[l] = '\0';
			length1 = strlen(string1);
			
			length2 = strlen(string2);
			for(q = 0;q < length1; q++){
				hash1[string1[q]]++; 
			}
			for(x = 0;x < length2; x++){
				hash2[string2[x]]++;
			}
			for(y = 'a'; y <= 'z'; y++){
				count = count + abs(hash1[y] - hash2[y]);
			}
			printf("%d\n",(count/2));
			count = 0;	
		}
	}
	return 0;
}

