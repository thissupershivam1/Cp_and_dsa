#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPathSum(vector<vector<int> >& A, int i, int j, int N, int M) {
    // Base case: if we're out of bounds
    if (i >= N || j >= M) return -1e9; // Return a very small value
    
    // Base case: if we reached the bottom-right corner
    if (i == N - 1 && j == M - 1) return A[i][j];

    // Recursive calls: move right or down
    int moveDown = maxPathSum(A, i + 1, j, N, M);
    int moveRight = maxPathSum(A, i, j + 1, N, M);

    // Return current value + max of the two options
    return A[i][j] + max(moveDown, moveRight);
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int> > A(N, vector<int>(M));

    // Input matrix
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    // Start recursion from (0, 0)
    cout << maxPathSum(A, 0, 0, N, M) << endl;

    return 0;
}
