class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.size()==0)
            return 0;
        
        int i=0, j=1;
        while(j<nums.size()){
            if(nums[i] != nums[j]){
                i+=1;
                nums[i] = nums[j];
            }
            j+=1;
        }
        sort(nums.begin(), nums.begin()+i+1);
        return i+1;
    }
};
