class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int NumOfZeros = 0;
        for (int it = 0; it < size; it++){
            if (nums[it] == 0){NumOfZeros++;}
            else {
                nums[it-NumOfZeros] = nums[it];
            }
        }

        for (int j = size-1; j > (size-1-NumOfZeros); j--){
            nums[j] = 0;
        } // ex) size-1 = 4 size-1-NumOfZeros = 2 (4,3)

    }
};

//Better Version.
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int NonZeroidx = 0;
//        int size = nums.size();
//        for (int i = 0; i < size; i++) {
//            if (nums[i] != 0) {
//                nums[NonZeroidx++] = nums[i];
//            }
//        }
//        
//        for (int i = NonZeroidx; i < size; i++) {
//            nums[i] = 0;
//        }
//    }
//};
