var merge = function(nums1, m, nums2, n) {
    let t = m+n;
    let j=0;

    for(let i=m; i<t; i++){
        nums1[i] = nums2[j]
        j++;
    }
    nums1.sort((a,b) => a-b);
};
