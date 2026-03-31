class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int w= a.size();
        int j=0;
        for(int i=0;i<w;i++)
        {
            if(a[i]!=0)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
    }
};