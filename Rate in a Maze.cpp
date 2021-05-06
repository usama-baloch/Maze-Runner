#include "bits/stdc++.h"
using namespace std;
#define N 5
#define N1 6
void Recursive(int[N][N1],int,int,int*);

int main()
{
	int c = 0 ;
	int maze[N][N1]={{0,0,1,0,0,0},{0,0,0,0,0,0},{1,1,1,1,1,0},{0,0,0,0,1,0},{0,0,0,0,1,0}};
	for(int i = 0 ; i < N ; i ++)
	{
		for(int j = 0 ; j < N1 ; j ++)
		cout<<maze[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	Recursive(maze,0,0,&c);
	cout<<"No of Possible Paths = "<<c<<endl;
}
void Recursive(int maze[N][N1],int row,int col,int *count)
{
	if(row>=N || col>=N1) return ;
	
	if(row==N-1 && col==N1-1)
	{
	*count = *count + 1;
	return ;	
	}
	if(maze[row][col]==0){
	Recursive(maze,row,col+1,count);
	Recursive(maze,row+1,col,count);
	}
	else
	return ;
}
