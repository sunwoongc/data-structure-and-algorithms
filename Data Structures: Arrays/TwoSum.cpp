/* 1. Given an array of integers nums and an integer target,
 * return indices of the two **indices** of numbers such that they add up to target.
 * You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 * You can return the answer in any order.
 * 2. inputs : array of integers // outputs : **indices** of the two numbers [a, b]
 * 3. only one answer and can't use the same element twice.
 * 4.
 * 5. Input: nums = [2,7,11,15], target = 9, => Output: [0,1]
 *    looping over array with fixed index and break when finding target number.
 *    2+7 = 9 break, (if not) 2+11, 2+15, 7+11, 7+15, 11+15 => O(n^2)
 * 6. Can be worst if target number is sum of last two elts.
 * 7. Storing complements of each number, for example {2,9-2}, {7,9-7}, {11,9-11}, {15,9-15}
 *    for each keys, finding values in array "nums" => O(n) (Using Hash)
 *    same number can exist in the array, what if [2,7,11,15,-2] => {2,7}, {11,-2} both can be answer.
 *    => Have to return the indices so it's right to store each numbers and index {2,0} {7,1} {11,2} {15,3}
 *       And find the complement = target - nums[i] and find it in hashmap.
 *
 * 8. (1) Make hash-table with size of the input array and fill it with keys = nums[i],
 *    values = i. hashmap[nums[i]] = i
 *    (2) Looping over array "nums", check if there is "complement = target - nums[i]" in the array.
 *        It can't be the end and it can't be the same with i. Return each indices.
 * */




using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> TargetSum;
        
        for (int i = 0; i < nums.size(); i++){
            auto it = TargetSum.find(target-nums[i]);
            if (it != TargetSum.end() && it->second != i){
                return {it->second, i};
            }
            TargetSum[nums[i]] = i;
        }
        
        return {};
    }
};
