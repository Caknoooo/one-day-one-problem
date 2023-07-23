#include <bits/stdc++.h>
#define SUKSES using
#define BUTUH namespace
#define PROSES std

SUKSES BUTUH PROSES;

#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int, int>
#define mp make_pair
#define loop(t) int t; cin >> t; while(t--)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repp(i, a, b) for(int i = a; i <= b; i++)
#define MAX 105
#define MOD 1000000007

typedef struct cek{
	int x;
	int y;
	int distance;
} Node;

vector<vi> v(MAX, vi(MAX));
vector<vi> visited(MAX, vi(MAX, 0));
Node node;
queue<Node> q;
 
int row[] = {-1, 0, 1, 0}, baris;
int column[] = {0, 1, 0, -1}, kolom, minimum = 10000;

int leave(int x, int y)
{
	return(!visited[x][y] && !v[x][y] && x <= baris && x > 0 && y <= kolom && y > 0);
}

int findCostMinimum(int x, int y)
{
	visited[x][y] = 1;
	node.x = x;
	node.y = y;
	node.distance = 1;
	q.push(node);
	while(!q.empty())
	{
		int X = q.front().x,
		    Y = q.front().y,
		    dist = q.front().distance;
		    
		q.pop();
		//cout << X << " " << Y << " " << dist << endl;
		if(X == baris || X == 1 || Y == kolom || Y == 1)
		{
			minimum = dist;
			//cout << minimum << endl;
			break;
		}
		
		for(int i = 0; i < 4; i++)
		{
			int next_row = row[i] + X;
			int next_column = column[i] + Y;
			if(leave(next_row, next_column))
			{
				visited[next_row][next_column] = 1;
				node.x = next_row;
				node.y = next_column;
				node.distance = dist + 1;
				q.push(node);
			}
		}
	}
	
	return minimum;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x, y;
	
	cin >> baris >> kolom;
	for(int i = 1; i <= baris; i++)
	{
		for(int j = 1; j <= kolom; j++)
			cin >> v[i][j];
	}
	cin >> x >> y;
	
	cout << findCostMinimum(x, y) << endl;
}
