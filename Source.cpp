#include<iostream>
#include"DinamicBT.h"
#include"BTNode.h"
using namespace std;
void main() {
	DinamicBT bt;
	bt.Insert(1);
	bt.Insert(5);
	bt.Insert(16);
	bt.Insert(12);
	bt.Insert(7);
	bt.Insert(15);

	bt.PrintTree();
	cout << endl;
	//cout << "Da li postoji cvor sa vrednoscu 12: " << bt.NodeExists(12);
	//bt.SwapNodes(5, 12);
	bt.DeleteList(12);
	bt.PrintTree();
	//cout << "Roditelj broja: " << bt.ReturnParent(12);
	system("pause");
}