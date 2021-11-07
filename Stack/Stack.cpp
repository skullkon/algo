//
// Created by Yura Sargsyan on 25.09.2021.
//

#include "Stack.h"



void Stack::push(int a) {
    arr[position] = a;
//    std::cout<< position<< " "<< arr[position]<< std::endl;
//    std::cout<<a;
    position++;
}

int Stack::pop() {
    position--;
    int temp = arr[position];
    arr[position]=0;
    return temp;
}

int Stack::back() {
    return arr[position-1];
}

int Stack::size() {
    return position+1;
}

void Stack::view() {
    for (int i = 0; i<10;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
