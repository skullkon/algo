//
// Created by Yura Sargsyan on 04.12.2021.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::~LinkedList() {

}

void LinkedList::append(int value) {
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = nullptr;
    if (head == nullptr)
        head = new_node;
    else {
        Node *last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = new_node;
    }
}

void LinkedList::insert(int position, int value) {
    int i = 0;
    bool flag = false;
    Node *last = head;
    while (last) {
        if (i == position) {
            cout << "Вставка нового значения на позицию: " << i << endl;
            Node *new_node = new Node();
            new_node->data = value;
            new_node->next = last->next;
            last->next = new_node;
            flag = true;
        }
        i++;
        last = last->next;
        if (flag)
            break;
    }
}


void LinkedList::remove(int value) {
    bool flag = false;
    Node *last = head;
    while (last->next != nullptr) {
        if (last->next->data == value) {
            cout << "Удаление элемента: " << value << endl;
            if (last->next->next != nullptr) {
                Node *temp = last->next->next;
                delete (last->next);
                last->next = temp;
            } else {
                delete (last->next);
                last->next = nullptr;
            }
            flag = true;
        }
        if (last->data == value) {
            head = last->next;
        }
        last = last->next;
        if (flag)
            break;
    }
    if (!flag)
        cout << "Value for remove not found" << endl;
}

int LinkedList::pop() {
    if (head == nullptr) {
        cout << "Not allowed function POP for empty List" << endl;
        // спросить про то как правильно поступить в этой ситуации, когда нечего вывести, но из функции вывалиться надо.
        throw this->head;
    }
    int temp = head->data;
    head = head->next;
    return temp;
}

int LinkedList::pop(int position) {
    int i = 0;
    Node *last = head;
    int tempInt;
    bool flag = false;
    while (last) {
        if (last->next != nullptr && i + 1 == position) {
            Node *temp = last->next->next;
            tempInt = last->next->data;
            delete (last->next);
            last->next = temp;
            flag = true;
        }
        i++;
        last = last->next;
        if (flag)
            break;
    }
    if (!flag){
        cout<<"Position is not found"<<endl;
        return 0;
    }
    return tempInt;
}

void LinkedList::display() {
    if (head == nullptr) {
        cout << "Sorry,but head is not defined" << endl;
        return;
    } else {
        int i = 0;
        Node *last = head;
        while (last) {
            printf("In %d position value: %d \n", i++, last->data);
            last = last->next;
        }
    }
}

int LinkedList::size() {
    int i = 0;
    if (head == nullptr) {
        cout << "Sorry,but head is not defined" << endl;
    } else {

        Node *last = head;
        while (last) {
            i++;
            last = last->next;
        }
    }
    return i;
}

int LinkedList::front() {
    return head->data;
}
