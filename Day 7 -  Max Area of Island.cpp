class Solution {
public:
    int dfs(vector<vector < int>> &grid, int i, int j,int &temp)
    {
        if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j])
        {
            temp++;
			
			// setting current node to 0 to prevent self-loop
            grid[i][j] = 0;
            dfs(grid, i - 1, j,temp);
            dfs(grid, i + 1, j,temp);
            dfs(grid, i, j - 1,temp);
            dfs(grid, i, j + 1,temp);
        }
       return temp; 
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size(); 
        int ans = 0;
        
		// searching for nodes with 1
		for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 1)
                {   int temp = 0;
                    int area = dfs(grid, i, j,temp);
                    ans = max(area, ans);
                }
				
        return ans;
        
    }
};
