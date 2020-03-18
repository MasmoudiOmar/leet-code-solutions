class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            int j=i;
            {
                while(j<n-i-1)
                {
                    cout<<j<<endl;
                    int tmp;
                    tmp=matrix[i][j];
                    matrix[i][j]=matrix[n-j-1][i];
                    matrix[n-j-1][i]=matrix[n-i-1][n-1-j];
                    matrix[n-i-1][n-1-j]=matrix[j][n-i-1];
                    matrix[j][n-i-1]=tmp;
                    j++;
                }
            }
        }
    }
};
