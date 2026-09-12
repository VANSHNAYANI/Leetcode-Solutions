class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int maxy  = 0;
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < k; i++)
        {
            sum+=arr[i];
        }   
        maxy = sum;
        int remove  = k-1;

        for(int i = n-1;i >= n-k;i--)
        {
            sum -= arr[remove];
            sum += arr[i];   
            maxy = max(maxy,sum);
            remove-=1;
        }

        return maxy;


    }
};