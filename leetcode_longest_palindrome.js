/**
 * @param {string} s
 * @return {number}
 */
//Solved by using a map to store the number of each character in the string
//Then loop through the map to find the number of characters that have even number of occurences
//If there is a character with odd number of occurences, add the number of occurences - 1 to the count
//If the count is less than the length of the string, add 1 to the count
//Return the count
var longestPalindrome = function(s) {
    var map = {};
    var count = 0;
    for (var i = 0; i < s.length; i++) {
        if (map[s[i]]) {
        map[s[i]]++;
        } else {
        map[s[i]] = 1;
        }
    }
    for (var key in map) {
        if (map[key] % 2 === 0) {
        count += map[key];
        } else {
        count += map[key] - 1;
        }
    }
    if (count < s.length) {
        count++;
    }
    return count;
};

console.log(longestPalindrome("a"));