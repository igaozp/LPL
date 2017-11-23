//
// Created by igaozp on 2017/11/23.
//

#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;
    for (int i = 0; i < 5; i++) {
        // 向栈顶插入元素
        stack.push(i);
    }

    // 访问栈顶元素
    std::cout << stack.top();

    // stack 容纳的元素数
    std::cout << stack.size();

    // stack 容器是否为空
    std::cout << stack.empty();

    while (!stack.empty()) {
        // 删除栈顶的元素
        stack.pop();
    }

    return 0;
}
