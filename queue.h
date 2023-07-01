#pragma once
#include <iostream>
using namespace std;

template <class T>
class ListQueue {
	struct Node {
		T data;
		Node* next;
	};
	Node* head;
	Node* tail;
public:
	ListQueue();
	ListQueue(T);
	~ListQueue();
	void clear();
	bool isEmpty();
	void enque(const T);
	void deque();
	T& peek();
	void PrintQue();
};
