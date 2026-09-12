class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int sum = 0;
        int min_sum = INT_MAX;
        int min_abs = INT_MAX;
        for (int i = 0; i < n-2; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            while(left < right) {
                sum += arr[i] + arr[left] + arr[right];

                if (sum - target == 0) {
                    return sum;
                } else if (sum - target > 0) {
                    right--;
                } else {
                    left++;
                }

                if (min_abs > abs(sum - target)) {
                    min_sum = sum;
                    min_abs = abs(sum - target);
                }
                sum = 0;
            }
        }
        return min_sum;
    }
    };