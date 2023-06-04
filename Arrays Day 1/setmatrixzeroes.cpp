#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int row[n]={0};
	int column[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				column[j]=1;
			}
		}
	}
	 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || column[j]) {
                matrix[i][j] = 0;
            }
        }
    }
	return matrix;
}
//My attempt

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m=matrix[0].size();
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0] ==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int j=0;j<n;j++){
                matrix[j][0]=0;
            }
        }
       
    }
};
//optimal solution after watching striver video