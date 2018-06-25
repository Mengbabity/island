class Solution {
private:
    void DFS(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        grid[i][j]='0';
        
        if(i>0 && grid[i-1][j]=='1')
            DFS(grid,i-1,j,m,n);
        if(i<m-1 && grid[i+1][j]=='1')
            DFS(grid,i+1,j,m,n);
        if(j>0 && grid[i][j-1]=='1')
            DFS(grid,i,j-1,m,n);
        if(j<n-1 && grid[i][j+1]=='1')
            DFS(grid,i,j+1,m,n);
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        if(m==0)
            return 0;
        int n=grid[0].size();
        int res=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    res++;
                    DFS(grid,i,j,m,n);
                }
            }
        }
        
        return res;
    }
};
