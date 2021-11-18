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
    player = 2; 
}

// The parameter move is opponent's move 
Move StudentAI::GetMove(Move move)
{
    // The very first move
    if (move.seq.empty()){
        player = 1;
    }
    // If I am player 1, then this move is for my opponent who is player 2
    // If I am player 2, then this move is for my opponent who is player 1
    else{
        board.makeMove(move,player == 1?2:1);
    } 

    // root node of the tree
    // parentNode is null?
    Node* root = new Node;
    root->myTurn = true;
    root->parentNode = nullptr;
    root->theMove = move;
    root->uctValue = 0;
    root->visitCount = 0;
    root->winCount = 0;

    vector<vector<Move> > moves = board.getAllPossibleMoves(player);

    // SELECT
    // Select a child node, for me and for my opponent. Select the child node of the current node.
    // If it's for me, select using UCT. If for opponent, randomly select. 
    // Repeatedly do this until reach terminal state or non-terminal state that is unvisisted.
    // Repeatedly select 

    // EXPAND
    // One or more child nodes are added to expand the tree, according to the available actions.
    // Expand all possiblities and add them to the tree??

    // SIMULATE
    // BACK-PROPOGATE



    Move res = 0;
    board.makeMove(res,player);
    return res;

    // Code for making random move
    // srand(time(NULL));
    // int i = rand() % (moves.size());
    // vector<Move> checker_moves = moves[i];
    // int j = rand() % (checker_moves.size());
    // Move res = checker_moves[j]; 
    // GetBestMove();
}


// Move MonteCarloTreeSearch::GetBestMove()
// {
//     Move res;
//     while(true)
//     {
//         cout << "Hello" << endl;
//     }

//     return res;
// }

Node MCTSBestMove(Node root)
{
    for (int i = 0; i < 500; i++) 
    {
        // 
    }


    Node verygood;
    return verygood;

}


