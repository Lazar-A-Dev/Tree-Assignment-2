#pragma once
#include<iostream>
using namespace std;
class BTNode {
public:
	int info;
	BTNode* left, * right, *parent;


	BTNode() {
		info = 0;
		left = right = parent = NULL;
	}

	BTNode(int i) {
		info = i;
		left = right = parent =  NULL;
	}

	BTNode(int i, BTNode* l, BTNode* r) {
		info = i;
		right = r;
		left = l;
		parent = NULL;
	}

	BTNode(int i, BTNode*p,  BTNode* l, BTNode* r) {
		info = i;
		right = r;
		left = l;
		parent = p;
	}

	void SetInfo(int p) {
		info = p;
	}

	void Print() {
		cout << info << endl;
	}
};