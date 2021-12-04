//
// Created by Yura Sargsyan on 04.12.2021.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H


class LinkedList {
public:
    LinkedList() {head = nullptr;}
    ~LinkedList();
    void append(int value); // добавить в конец элемент
    void insert(int position, int value); // добавить элемент на позицию
    void remove(int value); // удалить первый элемент с таким значением
    int pop(); // удалалить головной элемент
    int pop(int position); // удалить элемент с позиции
    void display();
    int size();
    int front();

private:
    class Node {
    public:
        int data;
        Node* next;
    };
    Node* head;
};


#endif //LINKEDLIST_LINKEDLIST_H
