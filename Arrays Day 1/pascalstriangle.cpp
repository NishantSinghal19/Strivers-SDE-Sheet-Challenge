vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        ans[i][0] = 1;

        for (int j = 1; j <= i; j++) {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }

    vector<vector<int>> triangle(N);
    for (int i = 0; i < N; i++) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            triangle[i][j] = ans[i][j];
        }
    }

    return triangle;
}
