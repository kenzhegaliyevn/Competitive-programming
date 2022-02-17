/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    var i = 0,
        j = 0,
        ans = [];
    if (nums1.length === 0) {
        for (var q = 0; q < nums2.length; q++)
            nums1[q] = nums2[q];
        return nums1;
    }
    
    if (nums2.length === 0)
        return nums1;

    while(true) {
        if (i === m) {
            for (var k = j; k < n; k++)
                ans.push(nums2[k]);
            for (var q = 0; q < ans.length; q++)
                nums1[q] = ans[q];
            return nums1;
        }
        
        if (j === n) {
            for (var k = i; k < m; k++)
                ans.push(nums1[k]);
            for (var q = 0; q < ans.length; q++)
                nums1[q] = ans[q];
            return nums1;
        }        
                
        if (nums1[i] <= nums2[j]) {
            ans.push(nums1[i]);
            i++;
        } else {
            ans.push(nums2[j]);
            j++;            
        }        
    }
};
