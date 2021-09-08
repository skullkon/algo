#pragma once
#include <vector>
template<class T>

class Queue
{
public:
	void push(T);
	T pop();
	T top();
	bool empty();
	int size();

private:
	std::vector<T> v;
};