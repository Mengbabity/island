class Solution {
private:
    void help(vector<vector<char>>& board,int i,int j,int m,int n)
    {
        if(board[i][j]=='O')
        {
            board[i][j]='T';
            if(i>0)
                help(board,i-1,j,m,n);
        
            if(i+1<m)
                help(board,i+1,j,m,n);
        
            if(j>0)
                help(board,i,j-1,m,n);
        
            if(j+1<n)
                help(board,i,j+1,m,n);
        }
    }
    
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        if(m==0)
            return;
        
        int n=board[0].size();
       
		for(int i=0;i<m;i++)
        {
			help(board,i,0,m,n);
			if(n>1)
				help(board,i,n-1,m,n);
		}
        
		for(int j=1;j+1<n;j++)
        {
			help(board,0,j,m,n);
			if(m>1)
				help(board,m-1,j,m,n);
		}
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(board[i][j]=='O')
                    board[i][j]='X';
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(board[i][j]=='T')
                    board[i][j]='O';
    }
};
