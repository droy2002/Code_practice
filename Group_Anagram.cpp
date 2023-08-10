#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;

        for(auto x:strs)
        {
          string temp = x;
          sort(x.begin(), x.end());
          umap[x].push_back(temp);
        }
        for(auto x:umap)
        {
          ans.push_back(x.second);
        }

        return ans;
}

int main()
{
    vector<string> strs ={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs); 
    for(auto group : result) 
    {
        for(auto str : group) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}