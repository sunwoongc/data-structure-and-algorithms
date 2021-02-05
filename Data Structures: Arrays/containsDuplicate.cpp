class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> CheckDuplicate;
        int size = nums.size();
        for (int i = 0; i < size; i++){
            if (++CheckDuplicate[nums[i]] == 2){
                return true;
            }
        }
        return false;
    }
};
