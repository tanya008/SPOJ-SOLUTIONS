#include <iostream>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
	int t,ng,nm;
	cin>>t;

	while(t--)
	{
		priority_queue < int , vector<int>,greater<int> > pg;
		priority_queue < int, vector< int>,greater<int> > pm;
		cin>>ng>>nm;
		
		for(int i=0;i<ng;i++)
		{
			int a;
			cin>>a;
			pg.push(a);
		}

		for(int i=0;i<nm;i++)
		{
			int a;
			cin>>a;
			pm.push(a);
		}
	
		while(!pg.empty() && !pm.empty())
		{
			if(pg.top()<pm.top())
			{
				pg.pop();
			}
			
			else
			{
				pm.pop();
			}
		}

		if(pg.empty())
		cout<<"MechaGodzilla"<<endl;

		else if(pm.empty())
		cout<<"Godzilla"<<endl;
		
		else
		cout<<"uncertain"<<endl;
	}
}
				
		
