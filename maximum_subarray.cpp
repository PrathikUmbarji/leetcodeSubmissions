class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN, cur_sum = 0;
        for(auto i : nums)
        {
            cur_sum = max(i, cur_sum + i);
            max_sum = max(max_sum,cur_sum);
        }
        return max_sum;
    }
};