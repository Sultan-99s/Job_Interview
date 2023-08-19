var removeElement = function(nums, val) {
    let arr=0;
    for(let i=0; i<nums.length; i++){
        if(nums[i] !== val){
            nums[arr++] = nums[i];
        }
    }
    return arr;
};
