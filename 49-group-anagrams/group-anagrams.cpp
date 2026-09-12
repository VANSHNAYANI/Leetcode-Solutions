class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans(n);
        map<string,int>mpp;
        string s1;
        int ind  = 0;
        for(auto it : strs)
        {
            s1 = it;
            sort(it.begin(),it.end());
            if(mpp.find(it)!=mpp.end())
            {
                ans[mpp[it]].push_back(s1);
            }
            else{
                mpp[it] = ind;
                ans[mpp[it]].push_back(s1);
                ind+=1;
            }
        }
        ans.resize(mpp.size());
        return ans;

    }
};