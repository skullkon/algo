#include <iostream>
#include "Stack.h"
#include "Stack.cpp"


using namespace std;

bool isOpen(char ch)
{
	return ch == '{' || ch == '(' || ch == '[';
}

bool isPair(char open, char close)
{
	return open == '{' && close == '}' ||
		open == '(' && close == ')' ||
		open == '[' && close == ']';
}

bool isBalanced(string s)
{
	Stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		if (isOpen(s[i]))
		{
			st.push(s[i]);
		}
		else
		{
			if (!st.empty() && isPair(st.top(), s[i]))
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return st.empty(); 
}

void main() 
{
	// (){}[]
	string s = "()({[]}())"; 
	string s2 = "{}";
	string s3 = "}{";
	string s4 = "";
	string s5 = "(()";
	string s7 = "[(])";
	cout << isBalanced(s) << endl;
	cout << isBalanced(s2) << endl;
	cout << isBalanced(s3) << endl;
	cout << isBalanced(s4) << endl;
	cout << isBalanced(s5) << endl;
	cout << isBalanced(s7) << endl;
}