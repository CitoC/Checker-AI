#include "StudentAI.h"
#include <random>

//The following part should be completed by students.
//The students can modify anything except the class name and exisiting functions and varibles.
StudentAI::StudentAI(int col,int row,int p)
	:AI(col, row, p)
{
    // cout << "I am in Student AI Constructor" << endl;
    // cout << col << endl;
    // cout << row << endl;
    // cout << p << endl;
    // board.getAllPossibleMoves(0);
    board.showBoard();

    board = Board(col,row,p);
    board.initializeGame();
    player = 2; // Changed from 1 to 2 stopped the crash. Wtf?
}

Move StudentAI::GetMove(Move move)
{
    if (move.seq.empty()){
        player = 1;
    }
    else{
        board.makeMove(move,player == 1?2:1);
    } 
    vector<vector<Move> > moves = board.getAllPossibleMoves(player);
    srand(time(NULL));
    int i = rand() % (moves.size());
    vector<Move> checker_moves = moves[i];
    int j = rand() % (checker_moves.size());

    Move res = checker_moves[j];

    cout <<  "i = " << i << " , j = " << j << endl;
    board.makeMove(res,player);

    return res;
}