class Solution {
public:
    void dfs_traversal (vector<vector<int>>& image, int i, int j, int hit_color, int newColor) {
        if (i<0 or i>=image.size() or j<0 or j>=image[0].size() or image[i][j]!=hit_color) {
            return;
        }
        image[i][j] = newColor;
        dfs_traversal (image, i-1, j,   hit_color, newColor); /* UP     */
        dfs_traversal (image, i,   j+1, hit_color, newColor); /* RIGHT  */
        dfs_traversal (image, i+1, j,   hit_color, newColor); /* DOWN   */
        dfs_traversal (image, i,   j-1, hit_color, newColor); /* LEFT   */
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        /* Storing hit_color at [sr][sc] & Checking for EDGE case that's if (hit_color==newColor) => RETURN */
        int hit_color = image[sr][sc];
        
        if (hit_color==newColor)
            return image;
        
        /* DFS Traversing from [sr][sc] ---> Applying newColor only in the QUAD neighbors */
        dfs_traversal (image, sr, sc, hit_color, newColor);  
        
        return image;
    }
};
