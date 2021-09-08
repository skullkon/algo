#pragma once
#include <vector>
template<class T>

class Stack
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

