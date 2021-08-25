class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp,subs;
        vector<vector<string>> res;
        temp = strs;
        for(int i=0; i<temp.size(); i++)
            sort(temp[i].begin(), temp[i].end());
        for(int i=0; i<temp.size(); i++)
        {
            vector<string> subs;
            string s;
            if(temp[i] == "0")
                continue;
            else
                s = temp[i];
            for(int j=i; j<temp.size(); j++)
            {
                if(s == temp[j])
                {
                    subs.push_back(strs[j]);
                    temp[j] = "0";
                }
            }
            res.push_back(subs);
        }
        return res;
    }
};
