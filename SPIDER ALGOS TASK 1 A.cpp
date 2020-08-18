#include<iostream>
#include<string>

using namespace std;
string next(string bin,long n)
{   int j;
	for( j=n-1;j>=0;j--)
	{
		if(bin[j]=='0')
		break;
		else
		bin[j]='0';
	}
	bin[j]='1';
	return bin;
}

string prev(string bin,long n)
{	int j;
	for( j=n-1;j>=0;j--)
	{
		if(bin[j]=='1')
		break;
		else
		bin[j]='1';
	}
	bin[j]='0';
	return bin;
}


int main()
{
	long n;
	string binstr;
	cin>>n;
	cin>>binstr;
	int count_one=0;
	for(int i=0;i<n;i++)
	{
		if(binstr[i]=='1')
		count_one++;
	}
	if(count_one==n || count_one==0)
	cout<<"-1";
	else
	{
		string nxt=next(binstr,n);
		string pre=prev(binstr,n);
		cout<<pre<<" "<<nxt;
	}
	
}
