//
// Created by Yura Sargsyan on 04.12.2021.
//
#include "LinkedList.h"
#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H


class Queue {
public:
    void push(int value);
    int pop();
    int front();
    bool empty();
    int size();
    void display();

private:
    LinkedList queue;
};


#endif //QUEUE_QUEUE_H
