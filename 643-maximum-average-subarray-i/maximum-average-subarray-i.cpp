class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        int left = 0;
        double sum = 0;
        double ans = INT_MIN;
        for(int right = 0; right < n; right++)
        {
                sum += arr[right];
            if(right >= k-1)
            {
                 ans = max(ans,sum / k);
                 sum -= arr[left];
                 left+=1;
            }   

        }
        return ans;
    }
};