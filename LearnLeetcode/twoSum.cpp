//两数之和
#include"stdafx.h"
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
		{
			map[nums[i]] = i;
		}
		vector<int> res;
		res.reserve(2);
		for(int i = 0;i<nums.size();i++)
		{
			int t = target - nums.at(i);
			if (map.count(t) && map[t] != i)
			{
				res.push_back(i);
				res.push_back(map[t]);
				break;
			}
		}
		cout << res[0] << "------------" << res[1] << endl;
		return res;
	}
};



