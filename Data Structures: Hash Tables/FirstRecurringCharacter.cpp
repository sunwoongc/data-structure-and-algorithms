class Solution {
public:
    static int FirstReccuringCharacter(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int>RecurringNum;
        for (int i = 0; i < size; i++){
            if(++RecurringNum[nums[i]] >= 2){
                return nums[i];
            }
        }
        return -1;
    }
};
