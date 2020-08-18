#include<iostream>
#include<utility>

using namespace std;
pair<int,int> Num(int query)
{
	switch(query)
	{
		case 56:
			return make_pair(7,8);
		case 63:
			return make_pair(7,9);
		case 70:
			return make_pair(7,10);
		case 112:
			return make_pair(7,16);
		case 301:
			return make_pair(7,43);
		case 72:
			return make_pair(8,9);
		case 80:
			return make_pair(8,10);
		case 128:
			return make_pair(8,16);
		case 344:
			return make_pair(8,43);
		case 90:
			return make_pair(9,10);
		case 144:
			return make_pair(9,16);
		case 387:
			return make_pair(9,43);
		case 160:
			return make_pair(10,16);
		case 430:
			return make_pair(10,43);
		case 688:
			return make_pair(16,43);
		
	}
}

int main()
{
	int result[6];
	int query1,query2,query3,query4;
	cout<<0<<" "<<1<<endl;
	cin>>query1;
	cout<<1<<" "<<2<<endl;
	cin>>query2;
	cout<<3<<" "<<4<<endl;
	cin>>query3;
	cout<<4<<" "<<5<<endl;
	cin>>query4;
	
	pair<int,int> p1=Num(query1);
	pair<int,int> p2=Num(query2);
	pair<int,int> p3=Num(query3);
	pair<int,int> p4=Num(query4);
	
	if(p1.second==p2.first || p1.second==p2.second)
	{
		result[1]=p1.second;
		result[0]=p1.first;
		if(p1.second==p2.first)
		result[2]=p2.second;
		else
		result[2]=p2.first;
	}
	else
	{
		result[1]=p1.first;
		result[0]=p1.second;
		if(p1.first==p2.first)
		result[2]=p2.second;
		else
		result[2]=p2.first;
	}
	if(p3.second==p4.first || p3.second==p4.second)
	{
		result[4]=p3.second;
		result[3]=p3.first;
		if(p3.second==p4.first)
		result[5]=p4.second;
		else
		result[5]=p4.first;
	}
	else
	{
		result[4]=p3.first;
		result[3]=p3.second;
		if(p3.first==p4.first)
		result[5]=p4.second;
		else
		result[5]=p4.first;
	}
	for(int i=0;i<6;i++)
	{
		cout<<result[i]<<" "<<flush;
	}

}
