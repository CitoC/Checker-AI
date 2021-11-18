#ifndef STUDENTAI_H
#define STUDENTAI_H
#include "AI.h"
#include "Board.h"
#pragma once

//The following part should be completed by students.
//Students can modify anything except the class name and exisiting functions and varibles.


class StudentAI :public AI
{
public:
	StudentAI(int col, int row, int p);
	virtual Move GetMove(Move board);
public:
    Board board;
};

class MonteCarloTreeSearch
{
public:
	// Move GetBestMove();
	int player;
};

// FUNCTIONS //
struct Node
{
	vector<Node*> childNode;
	Node* parentNode;
	int winCount;
	int visitCount;
	bool myTurn;
	Move theMove;
	double uctValue;
};

Node MCTSBestMove(Node root);
// function for selection
// function for expansion
// function for simulation
// function for backpropogation


#endif //STUDENTAI_H



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

// Checker AI Thought Process
// Choose an optimal move against an optimal opponent
// When it is my turn, simulate 1000 games where I choose a child using the UCT.
// When there is children, expand the node.
// After expansion, randomly select a child node until reaches leaf node (game end).
// Back-track and update the values of all the nodes that were chosen. Values: visits and wins
// Repeat until resource ran out or fix amount of runs. Let's try 100 run first.
// Finally, choose the node with the highest winrate?

// What does a node have?
// pointer to parent
// list of children - each children is a node itself
// 
// What is the state of the board?
// Current location of the pieces on the board
// 
// What is state of the game?
// State of the game corresponds to

// How to turn states into nodes?