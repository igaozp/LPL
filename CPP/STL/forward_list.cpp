//
// Created by igaozp on 2017/11/15.
//

#include <iostream>
#include <forward_list>

/**
 * 重载输出流
 *
 * @param out 输出流
 * @param list 输出的列表
 * @return 重载的输出流
 */
std::ostream &operator<<(std::ostream &out, std::forward_list<int> &list) {
    for (auto &i : list) {
        out << i << "\t";
    }
    out << std::endl;
    return out;
}

/**
 * 单向列表
 *
 * @return 0
 */
int main() {
    std::forward_list<int> list = {1, 2, 3, 4, 5};
    std::cout << list;

    // 检查列表是否为空
    std::cout << list.empty() << std::endl;

    // 在指定位置的后面插入新的元素
    list.insert_after(list.begin(), 1);
    std::cout << list;

    // 擦除指定位置后的元素
    list.erase_after(list.begin());
    std::cout << list;

    // 在列表头部插入元素
    list.push_front(0);
    std::cout << list;
    // 删除列表头部的元素
    list.pop_front();
    std::cout << list;

    // 合并两个已经排序的列表
    std::forward_list<int> another_list = {6, 7, 8, 9, 10};
    list.merge(another_list);
    std::cout << list;

    // 反转列表
    list.reverse();
    std::cout << list;

    // 对列表排序
    list.sort();
    std::cout << list;

    // 删除列表连续的重复元素
    list.unique();

    return 0;
}