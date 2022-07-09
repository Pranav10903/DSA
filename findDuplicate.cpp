class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate = -1;
        for(int i=0;i<nums.size();i++)
        {
            int current = abs(nums[i]);
            if(nums[current]<0)
            {
                duplicate = current;
                break;
            }
            nums[current] *= -1;
        }
        for(auto it:nums)
        {
            it = abs(it);
        }
        return duplicate;
    }
};
