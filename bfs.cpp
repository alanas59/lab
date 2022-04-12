#include<bits/stdc++.h>
using namespace std;
int cost[10][10],i,j,k,n,queu[10],front,rear,v,visit[10],visited[10];
int main()
{
	int m;

	cout <<"Enter the number of vertex :";
	cin >> n;
	cout <<"Enter the number of Edges :";
	cin >> m;
	cout <<"Enter the start and end point of each edges :";
	for(k=1;k<=m;k++)
	{
		cin >>i>>j;
		cost[i][j]=1;
	}
	cout <<"Enter initial vertex  : ";
	cin >>v;
	cout <<"Visitied vertices are ....";
	cout << v<<" ";
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=1;j<=n;j++)
			if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
				visit[j]=1;
				queu[rear++]=j;
			}
		v=queu[front++];
		cout<<v << " ";
		k++;
		visit[v]=0;
		visited[v]=1;
	}
	return 0;
}

