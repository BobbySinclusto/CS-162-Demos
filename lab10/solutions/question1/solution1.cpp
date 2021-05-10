#include <algorithm>
#include <vector>

using namespace std;

bool containsDuplicate (vector<int>& nums){
//	//solution 1: sort first, and compare the adjacent two elements
//	if (nums.size() == 1 || nums.size() == 0) return false;
//	sort(nums.begin(), nums.end());
//    	for (int i = 0; i < nums.size()-1; ++i){
//        	if (nums[i] == nums[i+1])
//            		return true;
//    	}
//    	return false;


	//solution 2: use nested for loop
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (nums[i] == nums[j])
				return true;
		}
	}
	return false;
}
