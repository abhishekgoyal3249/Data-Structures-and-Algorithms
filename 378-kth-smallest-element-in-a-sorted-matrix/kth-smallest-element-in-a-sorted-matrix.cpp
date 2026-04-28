class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
        int w = a.size();
        int s=w*w;
        int b[s];
        int q=0;
        
        for(int i=0;i<w;i++)
        {
            for(int j=0;j<w;j++)
            {
                b[q]=a[i][j];
                q++;
            }
        }
        sort(b,b+s-1);
        return b[k-1];
    }
};