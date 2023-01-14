/**
 * @param {number[]} nums
 * @return {number[][]}
 */
//Solved by sorting the array, then using two pointers to find the sum of the three numbers
//If the sum is 0, push the three numbers into the result array
//If the sum is less than 0, move the left pointer to the right
//If the sum is greater than 0, move the right pointer to the left
//If the sum is 0, move both pointers to the right and left
//If the number at the left pointer is the same as the number at the left pointer - 1, move the left pointer to the right
//If the number at the right pointer is the same as the number at the right pointer + 1, move the right pointer to the left
//If the number at the current index is the same as the number at the current index - 1, move to the next index

var threeSum = function(nums) {
    var result = [];
    nums.sort(function(a, b) {
        return a - b;
    });
    for (var i = 0; i < nums.length; i++) {
        if (i > 0 && nums[i] === nums[i - 1]) {
            continue;
        }
        var left = i + 1;
        var right = nums.length - 1;
        while (left < right) {
            var sum = nums[i] + nums[left] + nums[right];
            if (sum === 0) {
                result.push([nums[i], nums[left], nums[right]]);
                left++;
                right--;
                while (left < right && nums[left] === nums[left - 1]) {
                    left++;
                }
                while (left < right && nums[right] === nums[right + 1]) {
                    right--;
                }
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return result;
};
console.log(threeSum([-1, 0, 1, 2, -1, -4]));