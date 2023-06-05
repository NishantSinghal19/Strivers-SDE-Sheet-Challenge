#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int i,j,left,right,top,bottom,k,temp;
    left=0;top=0;right=m-1;bottom=n-1;
    while(top<bottom && left<right){
        temp = mat[top][left];
        for(i=left+1;i<=right;i++){
            k=mat[top][i];
            mat[top][i]=temp;
            temp=k;
        }
        top++;
         for(i=top;i<=bottom;i++)

         {

                k=mat[i][right];

                mat[i][right]=temp;

                temp=k;

 

         }

         right--;

         for(i=right;i>=left;i--)

         {

             k=mat[bottom][i];

             mat[bottom][i]=temp;

             temp=k;

         }

         bottom--;

         for(i=bottom;i>=top;i--)

         {

             k=mat[i][left];

             mat[i][left]=temp;

             temp=k;

         }

         left++;

         mat[top-1][left-1]=temp;
    }

}

// Rotate matrix by 1 position

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }   
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
// Rotate Matrix by 90 Degree
