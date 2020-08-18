#include<iostream>
#include<string>

using namespace std;
string findnext(string binary,long n)
{   int i;
	for( i=n-1;i>=0;i--)
	{
		if(binary[i]=='0')
		break;
		else
		binary[i]='0';
	}
	binary[i]='1';
	return binary;
}

string findprev(string binary,long n)
{	int i;
	for( i=n-1;i>=0;i--)
	{
		if(binary[i]=='1')
		break;
		else
		binary[i]='1';
	}
	binary[i]='0';
	return binary;
}


int main()
{
	long n;
	string binary;
	cin>>n;
	cin>>binary;
	
	int countone=0;
	for(int i=0;i<n;i++)
	{
		if(binary[i]=='1')
		countone++;
	}
	if(countone==n || countone==0)
	cout<<"-1";
	else
	{
		string next=findnext(binary,n);
		string prev=findprev(binary,n);
		cout<<prev<<" "<<next;
	}
	
}
