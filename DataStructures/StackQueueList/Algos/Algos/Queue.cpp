#include "Queue.h"

template<class T> void Queue<T>::push(T el)
{
	v.push_back(el);
}

template<class T> T Queue<T>::pop()
{
	T el = v[0];
	v.pop();
	return el;
}

template<class T> T Queue<T>::front()
{
	int n = v.size();
	return v[n - 1];
}

template<class T> bool Queue<T>::empty()
{
	return v.empty();
}

template<class T> int Queue<T>::size()
{
	return v.size();
}