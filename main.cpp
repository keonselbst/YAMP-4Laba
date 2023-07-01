#include "queue.h"
#include "queue.cpp"

int main() {
	setlocale(0, "");
	cout << "----------------------------------" << endl;
	ListQueue<string> add;
	add.enque("3");
	add.enque("5");
	add.enque("1");
	add.enque("2");
	add.PrintQue();
	cout << "----------------------------------" << endl;
	cout << "first elem: " << add.peek() << '\n';
	add.deque();
	add.PrintQue();
	cout << "----------------------------------" << endl;
	add.clear();
	add.PrintQue();
}
