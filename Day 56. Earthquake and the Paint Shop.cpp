
struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) 
    {
        vector<alphanumeric> v;
        map<string,int> mp;
        for(auto it : A)
            mp[it]++;
        
        for(auto it : mp)
            v.push_back({it.first,it.second});
        return v;
    }
};
