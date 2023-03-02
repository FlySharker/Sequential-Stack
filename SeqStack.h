#pragma once
#include"Assistance.h"
#include"Vehicle.h"

template<class T>
class SeqStack
{
protected:
	int top;
	int maxsize;
	T* elems;
public:
	SeqStack(int size = 100);
	virtual ~SeqStack();
	SeqStack(const SeqStack<T>& sa);
	SeqStack<T>& operator=(const SeqStack<T>& sa);
	int GetLength() const;
	int GetMaxsize() const;
	bool IsEmpty() const;
	void Clear();
	void Traverse(void (*Visit)(const T&)) const;
	void StackFull();
	Status Push(T& e);
	Status Top(T& e);
	Status Pop(T& e);
};

template<class T>
SeqStack<T>::SeqStack(int size) :maxsize(size),top(-1)
{
	if (elems != NULL) delete[] elems;
	elems = new T[maxsize];
}

template<class T>
SeqStack<T>::~SeqStack()
{
	delete[] elems;
}

template<class T>
void SeqStack<T>::Traverse(void (*Visit)(const T&)) const
{
	if (top == -1) cout << "у╩ря©у" << endl;
	for (int i = top; i > -1; i--) {
		(*Visit)(elems[i]);
	}
}

template<class T>
void SeqStack<T>::StackFull()
{
	T* a;
	a = new T[maxsize+1];
	for (int i = 0; i <= top; i++) {
		a[i] = elems[i];
	}
	delete[] elems;
	elems = new T[2 * maxsize];
	maxsize *= 2;
	for (int i = 0; i <= top; i++) {
		elems[i] = a[i];
	}
}

template<class T>
Status SeqStack<T>::Push(T& e)
{
	if (top+1 != maxsize) {
		elems[++top] = e;
		return SUCCESS;
	}
	else {
		StackFull();
		elems[++top] = e;
		return SUCCESS;
	}
}

template<class T>
bool SeqStack<T>::IsEmpty() const
{
	if (top == -1) return 1;
	else return 0;
}

template<class T>
Status SeqStack<T>::Top(T& e)
{
	if (IsEmpty()) {
		return UNDER_FLOW;
	}
	else {
		e = elems[top];
		return SUCCESS;
	}
}

template<class T>
Status SeqStack<T>::Pop(T& e)
{
	if (IsEmpty()) {
		return UNDER_FLOW;
	}
	else {
		e = elems[top--];
		return SUCCESS;
	}
}

template<class T>
void SeqStack<T>::Clear()
{
	top = -1;
}

template<class T>
int SeqStack<T>::GetLength() const
{
	return top+1;
}

template<class T>
int SeqStack<T>::GetMaxsize() const
{
	return maxsize;
}

template<class T>
SeqStack<T>::SeqStack(const SeqStack<T>& sa)
{
	*this = sa;
}

template<class T>
SeqStack<T>& SeqStack<T>::operator=(const SeqStack<T>& sa)
{
	if (this != &sa) {
		delete[] elems;
		elems = new T[sa.maxsize];
		top = sa.top;
		for (int i = 0; i <= top; i++) {
			elems[i] = sa.elems[i];
		}
	}
	return *this;
}
