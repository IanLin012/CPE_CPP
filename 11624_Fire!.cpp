#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
const int INF = 1000000000;

int R, C;
char grid[MAXN][MAXN];
int fire[MAXN][MAXN];
int person[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void bfs_fire()
{
    queue<pair<int, int>> q;
    for (int i=0 ; i<R ; i++)
    {
        for (int j=0 ; j<C ; j++)
        {
            if (grid[i][j] == 'F')
            {
                q.push(make_pair(i, j));
                fire[i][j] = 0;
            }
            else fire[i][j] = INF;
        }
    }
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0 ; k<4 ; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx>=0 && nx<R && ny>=0 && ny<C && grid[nx][ny]!='#' && fire[nx][ny]==INF)
            {
                fire[nx][ny] = fire[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

void bfs_person()
{
    queue<pair<int, int>> q;
    for (int i=0 ; i<R ; i++)
    {
        for (int j=0 ; j<C; j++)
        {
            if (grid[i][j] == 'J')
            {
                q.push(make_pair(i, j));
                person[i][j] = 0;
            }
            else person[i][j] = INF;
        }
    }
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x==0 || x==R-1 || y==0 || y==C-1)
        {
            cout << person[x][y] + 1 << endl;
            return;
        }
        for (int k=0 ; k<4 ; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx>=0 && nx<R && ny>=0 && ny<C && grid[nx][ny]!='#' && person[nx][ny]==INF && person[x][y]+1<fire[nx][ny])
            {
                person[nx][ny] = person[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> R >> C;
        for (int i=0 ; i<R ; i++)
        {
            for (int j=0 ; j<C ; j++)
                cin >> grid[i][j];
        }
        memset(fire, 0, sizeof(fire));
        memset(person, 0, sizeof(person));
        bfs_fire();
        bfs_person();
    }
}