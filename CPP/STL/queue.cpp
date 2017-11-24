//
// Created by igaozp on 2017/11/24.
//

#include <iostream>
#include <queue>

/**
 * 队列的基本操作
 *
 * @return 0
 */
int main() {
    // 队列初始化
    std::queue<int> queue = {1, 2, 3, 4, 5};

    // 队列的第一个和最后一个元素
    std::cout << queue.front() << std::endl;
    std::cout << queue.back() << std::endl;

    // 检查队列是否为空以及队列的元素数量
    std::cout << queue.empty() << std::endl;
    std::cout << queue.size() << std::endl;

    // 向队列尾部插入元素
    queue.push(6);

    // 删除第一个元素
    queue.pop();

    return 0;
}