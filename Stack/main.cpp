#include <iostream>
#include "Stack.h"
#include <string>
#include <vector>

// ожидаемая форма  2 2 2 2 + + +

using namespace std;
int main() {
    Stack operands;
    int result = 0;

    string exp = "1 2 3 + -";
    string operators;

    reverse(exp.begin(), exp.end());

    for (int i = 0; i<exp.size();i++){
        if (isdigit(exp[i])){
            operands.push(exp[i]-'0');
        }
    }
    reverse(exp.begin(), exp.end());
    for (int i = 0; i<exp.size();i++){
        if (exp[i]=='+' || exp[i]=='-' || exp[i]=='/' || exp[i]=='*'){
            int temp1, temp2=0;
            if (exp[i]=='+')
            {
                temp1 = operands.pop();
                temp2 = operands.pop();
                operands.push(temp1 + temp2);
            }
            else if (exp[i]=='-'){
                temp1 = operands.pop();
                temp2 = operands.pop();
                operands.push(temp1 - temp2);
            }
            else if (exp[i]=='*'){
                temp1 = operands.pop();
                temp2 = operands.pop();
                operands.push(temp1 * temp2);
            }

        }
    }
    cout<<operands.back();

//    signs.view();
//    operands.view();
//    signs.view();
    return 0;
}
