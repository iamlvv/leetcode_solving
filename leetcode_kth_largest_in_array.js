/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
//Solved by sorting the array
//Return the number at the index of k - 1

var findKthLargest = function(nums, k) {
    nums.sort(function(a, b) {
        return b - a;
    })
    return nums[k - 1];
};
console.log(findKthLargest([3,2,3,1,2,4,5,5,6], 4));