class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++)
        {
            int z = 0;
            z = nums[i]* nums[i];
            nums[i] = z;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
        // for(auto &val:nums)
        //     val=val*val;
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};
