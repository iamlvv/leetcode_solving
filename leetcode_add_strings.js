/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
//Solved by using a while loop to loop through the two strings
//Add the two numbers together and add the carry to the sum
//If the sum is greater than 10, set the carry to 1 and the sum to the sum % 10
//If the sum is less than 10, set the carry to 0
//Add the sum to the result string
//If the carry is greater than 0, add the carry to the result string
//Return the result string

var addStrings = function(num1, num2) {
    //return num1 + num2;
    var result = "";
    var carry = 0;
    var i = num1.length - 1;
    var j = num2.length - 1;
    while (i >= 0 || j >= 0) {
        var sum = carry;
        if (i >= 0) {
            sum += parseInt(num1[i]);
            i--;
        }
        if (j >= 0) {
            sum += parseInt(num2[j]);
            j--;
        }
        result = sum % 10 + result;
        carry = Math.floor(sum / 10);
    }
    if (carry > 0) {
        result = carry + result;
    }
    return result;
};
console.log(addStrings("123", "456"));