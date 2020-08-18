#include<string>
#include<bits/stdc++.h> 
using namespace std; 
bool check_symmetrical(string a,int start1,int start2,int mid,int n)
{
	int flag=1;
	while(start1 < mid && start2 < n){
	
          
        if (a[start1]== a[start2]){
		
            start1 = start1 + 1;
            start2 = start2 + 1;
        }
		else
        {
			flag = 0;
    	    break;
    }
    return flag;
	}
}
int main()
{
	string a;
	bool flag;
	int n,mid,deg=0;
	cin>>n;
	cin>>a;
	if(n==1)
	{
		cout<<deg;
		exit(0);
	}
	mid=n/2;
	while(mid>0)
	{
		int start1=0;
		int start2=mid;
		flag=check_symmetrical(a,start1,start2,mid,n);
		if(flag)
		deg++;
		if(mid%2)
		break;
		n=n/2;
		mid=mid/2;
	}
	cout<<deg;
	
}

