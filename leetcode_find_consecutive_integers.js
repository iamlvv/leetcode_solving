/**
 * @param {number} value
 * @param {number} k
 */
//Solved by creating a stream of numbers and tracking the number of times the value appears
//If the value appears k times consecutively, return true
//If the value does not appear k times consecutively, return false
//If the stream is less than k numbers long, return false

var DataStream = function(value, k) {
    this.stream = [];
    this.value = value;
    this.k = k;
    this.tracker = 0;
};

/** 
 * @param {number} num
 * @return {boolean}
 */
DataStream.prototype.consec = function(num) {
    this.stream.push(num);
    if (num === this.value) this.tracker += 1;
    else this.tracker = 0;
    if (this.stream.length < this.k) return false;
    if (this.stream.length >= this.k && this.tracker >= this.k) {
        return true;
    } else return false;
};

/** 
 * Your DataStream object will be instantiated and called as such:
 * var obj = new DataStream(value, k)
 * var param_1 = obj.consec(num)
 */
//console.log(DataStream(["DataStream","consec","consec","consec","consec"], [[4,3],[4],[4],[4],[3]]));