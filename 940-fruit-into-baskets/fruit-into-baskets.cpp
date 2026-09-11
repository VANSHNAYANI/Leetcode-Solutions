class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mpp;
        int left = 0;
        int maxy = 0;
        int cnt = 0;
        for (int right = 0; right < n; right++) {
            mpp[arr[right]] += 1;
            while (mpp.size() > 2) {
                mpp[arr[left]] -= 1;
                if (mpp[arr[left]] <= 0) {
                    mpp.erase(arr[left]);
                }
                left += 1;
            }

        
                for (auto it : mpp) {
                    cnt += it.second;
                }

            maxy = max(cnt, maxy);
            cnt = 0;
        }
        return maxy;
    }
};