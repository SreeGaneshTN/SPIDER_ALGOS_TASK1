
#include <bits/stdc++.h> 
using namespace std; 
  
  
int main()  
{  
	long int n,temp;
	int r,x,y;
	cin>>n>>r>>x>>y;
	temp=r;
	int c[n],s[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(s[i]==1)
		{
			if(c[i]==1)
			r+=x;
			else
			r-=y;
		}
		else
		continue;
	}
	if(r>temp)
	{cout<<"promoted";
	}
	else if(r<temp)
	{
		cout<<"notpromoted";
	}
	else
	cout<<"nochange";
    return 0;  
}  
