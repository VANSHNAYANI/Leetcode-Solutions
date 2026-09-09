class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int maxy = arr[0];
        for (int right = 0; right < n; right++) {
            sum += arr[right];
            if (sum < 0) {
                maxy = max(maxy, arr[right]);
                sum = 0;
            } else {
                maxy = max(sum, maxy);
            }
        }
        return maxy;
    }
};