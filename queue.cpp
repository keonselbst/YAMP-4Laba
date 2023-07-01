#include "queue.h"

template <class T>
ListQueue<T>::ListQueue() {
	cout << "Конструктор по умолчанию" << endl;
	head = tail = NULL;
}

template <class T>
ListQueue<T>::ListQueue(T DATA) {
	cout << "Конструктор со значением" << endl;
	head = tail = new Node;
	head->data = DATA;
}

template <class T>
ListQueue<T>::~ListQueue() {
	cout << "Деструктор" << endl;
	clear();
}

template <class T>
void ListQueue<T>::clear() {
	while (!isEmpty()) {
		deque();
	}
}

template <class T>
bool ListQueue<T>::isEmpty() {
	return head == NULL;
}

template <class T>
T& ListQueue<T>::peek() {
	return head->data; //yязвим при head = NULL
}

template<class T>
void ListQueue<T>::deque() {  //из начала очереди
	if (!isEmpty()) {
		Node* p = head;
		head = head->next;
		delete p;
		p = NULL;
	}
}

template<class T>
void ListQueue<T>::enque(const T DATA) {
	if (isEmpty()) {
		head = tail = new Node;
		head->next = tail->next = NULL;
		head->data = DATA;
	}
	else {
		Node* p = new Node;
		p->data = DATA;
		p->next = NULL;
		if (tail == head) {
			tail = p;
			head->next = tail;
		}
		else {
			tail->next = p;
			tail = p;
		}
	}
}

template <class T>
void ListQueue<T>::PrintQue() {
	if (!isEmpty()) {
		Node* p = head;
		while (p) {
			cout << p->data << '\n';
			p = p->next;
		}
		delete p;
	}
}