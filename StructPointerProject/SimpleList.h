#pragma once

template <typename T>
struct Node
{
	T value;
	Node<T>* next;
};

template <typename T>
void Push(Node<T>*& head, T value);

template <typename T>
T Pop(Node<T>*& head);

template <typename T>
T Peek(Node<T>* head);

//void Insert(Node* head, int index, int value);
//int Remove(Node* head, int index);
//int At(Node* head, int index);

template <typename T>
void List(Node<T>* head);

#include "SimpleList.inl"


