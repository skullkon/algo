//
// Created by Yura Sargsyan on 25.09.2021.
//
#include <iostream>

#ifndef LAB1ALGOS_STACK_H
#define LAB1ALGOS_STACK_H

#include <cstring>

class Stack {
private:
    int position;

    int arr[10];
public:
    Stack() :position(0), arr{} {};

    void push(int a);

    int pop();

    int back();

    int size();

    void clear() { std::memset(arr, 0, sizeof(arr)); }

    void view();
};


#endif //LAB1ALGOS_STACK_H
