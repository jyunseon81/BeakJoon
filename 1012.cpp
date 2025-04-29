#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int T, M, N, K, X, Y, cnt;
int dirX[4] = {0, 0, -1, 1};
int dirY[4] = {-1, 1, 0, 0};


bool field[50][50];
bool visited[50][50];

void BFS(int r, int c)
{
    queue <pair<int, int>> q;
    q.push({ r, c });
    visited[r][c] = true;

    while (!q.empty())
    {
        pair<int, int> pos = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nR = pos.first + dirY[i];
            int nC = pos.second + dirX[i];

            if (nC < 0 || nC >= M || nR < 0 || nR >= N)
                continue;
            if (visited[nR][nC] || !field[nR][nC])
                continue;

            q.push({ nR, nC });
            visited[nR][nC] = true;
        }
    }
    cnt++;
}

int main ()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> M >> N >> K;
        cnt = 0;
        memset(field, 0, sizeof(field));
        memset(visited, 0, sizeof(visited));

        for (int j = 0; j < K; j++)
        {
            cin >> X >> Y;
            field[Y][X] = true;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (field[i][j] && !visited[i][j])
                BFS(i, j);
        }
    }
    cout << cnt << endl;
}
