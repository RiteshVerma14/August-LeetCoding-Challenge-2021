class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> res;
        set(nums,0,vec,res);
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        return vec;
    }
    
    void set(vector<int> &nums, int i, vector<vector<int>> &vec,vector<int> res)
    {
        if(i == nums.size())
        {
            sort(res.begin(),res.end());
            vec.push_back(res);
            return;
        }
        set(nums,i+1,vec,res);
        res.push_back(nums[i]);
        set(nums,i+1,vec,res);
    }
};
