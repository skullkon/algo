#include <iostream>
#include <fstream>
#include "Queue.h"

/*
 *  За один просмотр файла с данными и без использования дополнительных
 *  файлов напечатать элементы этого файла в следующем порядке: сначала – все числа,
 *  меньшие A, затем – все числа из отрезка [A, B], и наконец – все остальные числа.
 *  A и B – вводятся с клавиатуры (A < B).
 */



using namespace std;

int main() {
    int A, B = 0;
    int sum;
    Queue all;
    Queue lessA;
    Queue between;
    Queue other;
    printf("Введите отрезки A и B: ");
    scanf("%d %d", &A, &B);
    ifstream in("./text.txt");
    if (in.is_open()) {
        while (in >> sum) {
            all.push(sum);
        }
    }
    in.close();
//    queue.display();
    Queue temp = all;
    printf("Вывести все числа меньшие A\n");
    do{
        int tempInt = temp.pop();
        if (tempInt < A)
            lessA.push(tempInt);
    } while (!temp.empty());
    lessA.display();

    printf("Вывести все числа [A,B]\n");
    temp = all;
    do{
        int tempInt = temp.pop();
        if (tempInt >= A && tempInt <=B)
            between.push(tempInt);
    } while (!temp.empty());
    between.display();

    printf("Вывести все оставшиеся числа\n");
    temp = all;
    do{
        int tempInt = temp.pop();
        if (tempInt>B)
            other.push(tempInt);
    } while (!temp.empty());
    other.display();

    return 0;
}
