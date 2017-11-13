//
// Created by igaozp on 2017/11/11.
//

#include <iostream>
#include <deque>

/**
 * 重双端队列的输出流
 *
 * @param out 需要重载的输出流
 * @param deque 双端队列
 * @return 重载后的输出流
 */
std::ostream &operator<<(std::ostream &out, const std::deque<int> &deque) {
    for (auto &i : deque) {
        out << i << "\t";
    }
    out << std::endl;
    return out;
}

/**
 * 双端队列功能的简易演示
 *
 * @return 0
 */
int main() {
    // 初始化双端队列
    std::deque<int> deque(5);
    std::cout << deque;

    // 访问指定位置的元素
    std::cout << deque[0] << std::endl;
    std::cout << deque.at(0) << std::endl;
    // 访问队列的第一个和最后一个元素
    std::cout << deque.front() << std::endl;
    std::cout << deque.back() << std::endl;

    // 检查队列是否为空
    std::cout << deque.empty() << std::endl;
    // 检查队列的元素数量
    std::cout << deque.size() << std::endl;

    // 插入元素
    deque.insert(deque.begin(), 1);
    std::cout << deque;

    // 将元素插入队列的后端
    deque.push_back(2);
    // 清除队列后端的元素
    deque.pop_back();

    // 将元素插入队列的前端
    deque.push_front(2);
    // 从队列的前端清除元素
    deque.pop_front();

    return 0;
}