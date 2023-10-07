#include "DinamicBT.h"
DinamicBT::DinamicBT() {
	root = NULL;
	nodeNumb = 0;
}

DinamicBT::~DinamicBT() {
	DeleteTree(root);
}

void DinamicBT::DeleteTree(BTNode* p) {
	if (p != NULL) {
		DeleteTree(p->left);
		DeleteTree(p->right);
		delete p;
	}
}

void DinamicBT::Insert(int p) {
	BTNode* current = root;
	BTNode* previous = NULL;

	while (current != NULL) {
		previous = current;

		if (current->info > p)
			current = current->left;
		else if (current->info < p)
			current = current->right;
		else return;
	}
	if (root == NULL) {
		root = new BTNode(p);
		nodeNumb = 1;
	}

	else if (previous->info > p) {
		
		previous->left = new BTNode(p);
		previous->left->parent = previous;
		nodeNumb++;
	}

	else if (previous->info < p) {
		previous->right = new BTNode(p);
		previous->right->parent = previous;
		nodeNumb++;
	}
}

void DinamicBT::PrintTree() {
	cout << "Stablo: ";
	PrintTree(root);
}

void DinamicBT::PrintTree(BTNode* p){
	if (p != NULL) {
		PrintTree(p->left);
		cout << p->info << " ";
		PrintTree(p->right);
	}
}

BTNode* DinamicBT::FindNode(int p) {
	BTNode* tmp = root;
	while (tmp != NULL && tmp->info != p) {
		if(tmp->info < p)
		tmp = tmp->right;
		else
		tmp = tmp->left;
	}
	return tmp;
}

bool DinamicBT::NodeExists(int p) {
	if (FindNode(p))
		return true;
	return false;
}

void DinamicBT::SwapNodes(int a, int b) {
	

}

int DinamicBT::ReturnParent(int a) {
	BTNode* tmp = FindNode(a);
	return tmp->parent->info;
}

bool DinamicBT::IsEqual(int a, int b) {
	if (a == b)
		return true;
	else
		return false;
}

void DinamicBT::DeleteList(int p) {
	while (root->info != p && root != NULL) {
		if (root->info < p)
			root = root->right;
		else if (root->info > p)
			root = root->left;
		else return;
	}
	if(root->left == NULL && root->right == NULL)
	delete root;
}