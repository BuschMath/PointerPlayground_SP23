#include <iostream>

using namespace std;

struct Node
{
	int item;
	Node* next;
};

int main()
{
	int num = 10;
	Node* head = new Node;

	head->item = num;
	head->next = nullptr;

	cout << "Address: " << head << endl;
	cout << "Item: " << head->item << endl;
	cout << "Next address: " << head->next << endl;

	Node* temp = new Node;
	temp->item = 42;
	temp->next = head;
	head = temp;

	cout << "New item: " << head->item << endl;
	cout << "Orignal item: " << head->next->item << endl;

	return 0;
}