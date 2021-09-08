#include <iostream>
#include "Stack.h"

template<class T> void Stack<T>::push(T el)
{
	v.push_back(el);
}

template<class T> T Stack<T>::pop()
{
	T el = v.back();
	v.pop_back();
	return el;
}

template<class T> T Stack<T>::top()
{
	int n = v.size();
	return v[n - 1];
}

template<class T> bool Stack<T>::empty()
{
	return v.empty();
}

template<class T> int Stack<T>::size()
{
	return v.size();
}