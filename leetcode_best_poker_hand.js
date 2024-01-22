/**
 * @param {number[]} ranks
 * @param {character[]} suits
 * @return {string}
 */
//Solved by creating an object that counts the number of times each rank appears
//If the object contains a rank that appears 3 times, return "Three of a Kind"
//If the object contains a rank that appears 2 times, return "Pair"
//If the object contains a rank that appears 2 times and another rank that appears 2 times, return "Two Pair"
//If the object contains a rank that appears 3 times and another rank that appears 2 times, return "Full House"

var bestHand = function(ranks, suits) {
    if (suits[0] === suits[1] && suits[1] === suits[2] && suits[2] === suits[3] && suits[3] === suits[4]) {
        return "Flush";
    }
    else {
        var rankCount = {};
        for (var i = 0; i < ranks.length; i++) {
            if (rankCount[ranks[i]] === undefined) {
                rankCount[ranks[i]] = 1;
            } else {
                rankCount[ranks[i]] += 1;
            }
        }
        var rankCountArray = [];
        for (var key in rankCount) {
            rankCountArray.push(rankCount[key]);
        }
        rankCountArray.sort(function(a, b) {
            return b - a;
        })
        if (rankCountArray[0] >= 3) {
            return "Three of a Kind";
        } else if (rankCountArray[0] === 3 && rankCountArray[1] === 2) {
            return "Full House";
        } else if (rankCountArray[0] === 2 && rankCountArray[1] === 2) {
            return "Two Pair";
        } else if (rankCountArray[0] === 2) {
            return "Pair";
        } else {
            return "High Card";
        }
    }

};
console.log(bestHand([10,10,2,12,9], ["a","b","c","a","d"]));
