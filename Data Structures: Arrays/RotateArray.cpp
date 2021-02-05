class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k %= size;
        if (k != 0){
            k = size-k;
            vector<int> FirstkElts;
            for (int i = 0; i < k; i++) {
                FirstkElts.push_back(nums[i]);
            }
            nums.erase(nums.begin(), nums.begin()+k);
            for (int i = 0; i < k; i++){
                nums.push_back(FirstkElts[i]);
            }
        }
    }
};
