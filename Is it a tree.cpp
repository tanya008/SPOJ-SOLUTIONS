#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool visited[10006];
vector<int> v[10006];
int N,M,x,y;

void initialize()
{
	for(int i=0;i<10000;i++)
	{
		visited[i]=false;
	}
}

void dfs(int s)
{
	visited[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(visited[v[s][i]]==false)
		{
			dfs(v[s][i]);
		}
	}
}


int main() {
	cin>>N>>M;
	int connected=0;

	for(int j=0;j<M;j++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	memset(visited,false,sizeof(visited));
	
	for(int i=1;i<=N;i++)
	{
		if(visited[i]==false)
		{
			dfs(i);
			connected++;
		}
	}


	if(M==N-1 && connected==1)
		cout<<"YES"<<endl;

	else
		cout<<"NO"<<endl;
}
		
