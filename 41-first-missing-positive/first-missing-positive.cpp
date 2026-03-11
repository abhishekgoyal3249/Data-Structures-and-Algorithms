//Abhishek
class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        long long int w=a.size();
        int num=0;
        // for(int i=0;i<w;i++)
        // {
        //     for(int j=0;j<w-1;j++)
        //     {
        //         if(a[j]>a[j+1])
        //         {
        //             int c=a[j];
        //             a[j]=a[j+1];
        //             a[j+1]=c;
        //         }
        //     }
        // }
//or
        // for(int i=0;i<w-1;i++)
        // {
        //     int min=i;
        //     for(int j=i+1;j<w;j++)
        //         {
        //             if(a[j]<a[min])
        //             min=j;
        //         }
        //     swap(a[i],a[min]);
        // }

        sort(a.begin(), a.end());

        num=1;
        int m=0;
        int f=0;
        int ans = num+1;
        for(int i=0;i<w;i++)
        {
            if(a[i]==num&&m==0)
            {
                num++;
                m=1;
            }
            else if(a[i]==num&&m==1)
            {
                num++;
            }
            else if(a[i]!=num&&m==1)
            {
                f=1;
            }
            
        }
        return num;
    }
};