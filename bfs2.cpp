#include<stdio.h>
#define MAX 10
void bfs(int adj[][4],int visited[],int start)
{
	int queue[4],rear=-1,front=-1,i;
	queue[++rear]=start;
	visited[start]=1;
	while(rear!=front)
	{
		start=queue[++front];
		if(start== 4)
		printf("5\t");
		else
		printf("%d \t",start );
		for(i=0;i<4;i++)
		{
			if(adj[start][i]==1 && visited[i]==0)
			{
				queue[++rear]=i;
				visited[i]=1;
			}
		}
	}
}
int main()
{
	int visited[4];
	int adj[4][4],i,j;
	printf(" enter the adj matrix:");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		scanf("%d",&adj[i][j]);
		bfs(adj,visited,0);
		return 0;
	
}
