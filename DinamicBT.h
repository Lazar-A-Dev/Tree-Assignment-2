#pragma once
#include<iostream>
using namespace std;
#include"BTNode.h"
class DinamicBT
{
public:
	BTNode* root;
	int nodeNumb;

	DinamicBT();
	~DinamicBT();
	void Insert(int p);
	BTNode* FindNode(int p);
	void DeleteTree(BTNode* p);
	void DeleteList(int p);
	bool NodeExists(int p);
	void PrintTree(BTNode* p);
	void PrintTree();
	int NumberOfNodes() { return nodeNumb; }
	void SwapNodes(int a, int b);
	int ReturnParent(int);
	bool IsEqual(int a, int b);
};

