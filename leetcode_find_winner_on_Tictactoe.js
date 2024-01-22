/**
 * @param {number[][]} moves
 * @return {string}
 */
//Solved by creating a board and tracking the moves
//If the board contains a row, column, or diagonal that contains the same number, return the player that made the move
//If the board does not contain a row, column, or diagonal that contains the same number, return "Draw"
//If the board contains 9 moves, return "Draw"

var tictactoe = function(moves) {
    var board = [
        [0, 0, 0],
        [0, 0, 0],
        [0, 0, 0]
    ];
    var player = 1;
    var winner = 0;
    for (var i = 0; i < moves.length; i++) {
        board[moves[i][0]][moves[i][1]] = player;
        player = player === 1 ? 2 : 1;
    }
    for (var i = 0; i < 3; i++) {
        if (board[i][0] === board[i][1] && board[i][1] === board[i][2] && board[i][0] !== 0) {
            winner = board[i][0];
        }
        if (board[0][i] === board[1][i] && board[1][i] === board[2][i] && board[0][i] !== 0) {
            winner = board[0][i];
        }
    }
    if (board[0][0] === board[1][1] && board[1][1] === board[2][2] && board[0][0] !== 0) {
        winner = board[0][0];
    }
    if (board[0][2] === board[1][1] && board[1][1] === board[2][0] && board[0][2] !== 0) {
        winner = board[0][2];
    }
    if (winner === 1) return "A";
    if (winner === 2) return "B";
    if (winner === 0 && moves.length === 9) return "Draw";
    if (winner === 0 && moves.length < 9) return "Pending";
};
console.log(tictactoe([[0,0],[2,0],[1,1],[2,1],[2,2]]));