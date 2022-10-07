#pragma once
template <typename T>
void Push(Node<T>*& head, T value)
{
	Node<T>* nodeNew = new Node<T>;
	nodeNew->value = value;
	nodeNew->next = head;
	head = nodeNew;
}

template <typename T>
T Pop(Node<T>*& head)
{
	T value = head->value;
	Node<T>* nodeDel = head;

	head = head->next;
	delete nodeDel;

	return value;
}

template <typename T>
T Peek(Node<T>* head)
{
	return head->value;
}

template <typename T>
void List(Node<T>* head)
{
	std::cout << "---- stack ----\n";
	while (head)
	{
		std::cout << head->value << "\n";
		head = head->next;
	}
}