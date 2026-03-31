class Solution {
public:
    int findDuplicate(vector<int>& a) {
        sort(a.begin(),a.end());
        int answer=a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==a[i-1])
            {
                answer =a[i];
            }
        }
        return answer;
    }
};