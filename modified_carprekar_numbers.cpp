#include<stdio.h>
#include<iostream>
#include<string>
#include<sstream>
#include<stdlib.h>


using namespace std;

std::string intTostr(int num)
{
	ostringstream ss;
	ss << num;
	return ss.str();
}



int main()
{
	long long int p,q,p1,p2;
	long long int out[100000];
	long long int i,j=0,k;
	int length,length1;
	string str1,str2,str3,str4;
	cin >> p;
	cin >> q;
	
	for(i=p;i<=q;i++)
	{
		str1 = intTostr(i);
	//	cout<<str1<<"\n";
		length = str1.size();
		str2 = intTostr(i*i);
		length1 = str2.size();
		if(length1%2==0)
		{
		
			
		//	cout<<str2<<"\n";
			str3 = str2.substr(length,length);
		//	cout<<str3<<"\n";
			str4 = str2.substr(0,length);
		//	cout<<str4<<"\n";
			p1 = atoi(str3.c_str());
		//	cout<<p1<<"\n";
			p2 = atoi(str4.c_str());
		//	cout<<p2<<"\n";
			if(i == p1+p2)
			{
			out[j] = i;
			j = j +1;
		    }
		}
		else
		{

		//	cout<<str2<<"\n";
			str3 = str2.substr(length-1,length);
		//	cout<<str3<<"\n";
			str4 = str2.substr(0,length-1);
		//	cout<<str4<<"\n";
			p1 = atoi(str3.c_str());
		//	cout<<p1<<"\n";
			p2 = atoi(str4.c_str());
		//	cout<<p2<<"\n";
			if(i == p1+p2)
			{
			out[j] = i;
			j = j +1;
		    }			
		}
	}
	if(j==0)
	{
		printf("INVALID RANGE");
	}
	else
	{
	for(k=0;k<j;k++)
	{
		printf("%lld ",out[k]);
	}
}
	return 0;

}




