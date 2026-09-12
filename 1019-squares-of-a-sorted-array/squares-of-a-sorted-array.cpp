class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int ptr = n - 1;

        for(int i = 0; i < n; i++)
        {
            arr[i] = arr[i] * arr[i];
        }

        while(ptr >=0)
        {
            if(arr[left] >= arr[right])
            {
                ans[ptr] = arr[left];
                left+=1;
            }
            else{
                ans[ptr] = arr[right];
                right-=1;
            }
                ptr-=1;
        }
        return ans;


    }
};