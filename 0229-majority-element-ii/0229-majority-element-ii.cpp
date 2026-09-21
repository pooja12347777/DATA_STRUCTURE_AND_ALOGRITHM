#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mapp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mapp[nums[i]]++;
        }

        for (auto it : mapp) {
            if (it.second > nums.size() / 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};