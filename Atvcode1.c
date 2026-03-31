#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    char grid[M][N+1];
    for (int i = 0; i < M; i++)
        scanf("%s", grid[i]);

    for (int sr = 0; sr < M; sr++) {
        for (int sc = 0; sc < N; sc++) {
            if (grid[sr][sc] != 'O')
                goto next_cell;

            {
                int r = sr, c = sc;
                while (r + 1 < M && c >= 0 && c < N) {
                    if (grid[r+1][c] == '#') {
                        int left = c, right = c;
                        while (left - 1 >= 0 && grid[r+1][left-1] == '#')
                            left--;
                        while (right + 1 < N && grid[r+1][right+1] == '#')
                            right++;

                        if (c - left <= right - c) {
                            int cc = c;
                            while (cc >= left) {
                                if (grid[r][cc] == '.')
                                    grid[r][cc] = 'O';
                                cc--;
                            }
                            c = left - 1;
                        } else {
                            int cc = c;
                            while (cc <= right) {
                                if (grid[r][cc] == '.')
                                    grid[r][cc] = 'O';
                                cc++;
                            }
                            c = right + 1;
                        }
                    } else {
                        grid[r+1][c] = 'O';
                        r++;
                    }
                }
            }

            next_cell:;
        }
    }

    for (int i = 0; i < M; i++)
        printf("%s\n", grid[i]);

    return 0;
}