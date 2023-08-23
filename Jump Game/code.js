/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    let n = nums.length;

    let index = 0;
    for(let i=0; i<n; i++){
        if(i > index) return false;
        index = Math.max(index, i+nums[i]);
    }
    return true;
};
