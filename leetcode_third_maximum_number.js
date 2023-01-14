/**
 * @param {number[]} nums
 * @return {number}
 */
//Solved by sorting the array
//If the length of the array is less than 3, return the last number in the array
//Otherwise, loop through the array from the end
//If the current number is not the same as the number before it, add 1 to the count
//If the count is 2, return the number before the current number
//If the count is not 2, return the last number in the array
var thirdMax = function(nums) {
    nums.sort(function(a, b) {
        return a - b;
    })
    if (nums.length < 3) {
        return nums[nums.length - 1];
    }
    else {
        var count = 0;
        for (var i = nums.length - 1; i > 0; i--) {
            if (nums[i] !== nums[i - 1]) {
                count++;
            }
            if (count === 2) {
                return nums[i - 1];
            }
        }
        return nums[nums.length - 1];
    }
};

console.log(thirdMax([3, 1, 1, 2, 4]));