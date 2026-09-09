class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int>prefix(n);
        vector<int>suffix(n);

        long long product = 1;
        for(int i = 0; i < n; i++)
        {
            product *= arr[i];
            prefix[i] = product;
        }

        product = 1;
        for(int i  = n-1; i >= 0;i--)
        {
            product*=arr[i];
            suffix[i] = product;
        }

        for(int i = 0;i < n;i++)
        {
            if(i == 0)
            {
                arr[i] = suffix[i+1];
                continue;
            }
            if(i == n-1)
            {
                arr[i] = prefix[n-2];
                continue;
            }

            arr[i] = prefix[i-1] * suffix[i+1];


        }
        return arr;


    }
};