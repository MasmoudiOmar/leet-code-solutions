class Solution {
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
		vector<long> newNums(nums.begin(), nums.end());
		map<long, long> dict;
		for (int i = 0; i < nums.size(); i++) {
			dict[nums[i]]++;
			if (i - k - 1 >= 0) {
				dict[nums[i - k - 1]]--;
				if (dict[nums[i - k - 1]] == 0)
					dict.erase(nums[i - k - 1]);
			}
			if (dict[nums[i]] > 1 && t >= 0)
				return true;
			map<long, long>::iterator iter = dict.find(nums[i]);
			if ((++iter) != dict.end() && (*iter).first - nums[i] <= t)
				return true;
			iter--;
			if (iter != dict.begin() && nums[i] - (*(--iter)).first <= t)
				return true;
		}
		return false;
	}
};
