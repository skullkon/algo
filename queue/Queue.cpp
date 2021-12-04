//
// Created by Yura Sargsyan on 04.12.2021.
//

#include "Queue.h"
#include "LinkedList.h"

int Queue::size() {
    return queue.size();
}

bool Queue::empty() {
    if (queue.size() == 0)
        return true;
    return false;
}

int Queue::front() {
    return queue.front();
}

int Queue::pop() {
    return queue.pop();
}

void Queue::push(int value) {
    queue.append(value);
}

void Queue::display() {
    queue.display();
}