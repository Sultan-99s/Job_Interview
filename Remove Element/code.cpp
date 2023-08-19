class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int arr = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val)
                nums[arr++] = nums[i];
            
        }
        return arr;
    }
};
