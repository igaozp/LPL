//
// Created by igaozp on 2017/11/9.
//

#include <iostream>
#include <list>
#include <algorithm>

/**
 * 输出列表信息
 *
 * @param list 需要输出的列表
 * @param msg 附加的输出信息
 */
void print_list(const std::list<int> &list, const std::string &msg) {
    std::cout << msg << ": ";
    for (auto i : list) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}

int main() {
    // 初始化列表，默认值为 1
    std::list<int> list(5, 1);
    print_list(list, "List");
    // 使用已有的元素初始化列表
    std::list<int> another_list = {1, 2, 3, 4, 5};
    print_list(another_list, "Another List");

    // 获取列表的第一个元素
    std::cout << "list.front() = " << list.front() << std::endl;
    // 获取列表的最后一个元素
    std::cout << "list.back() = " << list.back() << std::endl;

    // 检查列表是否为空
    std::cout << "list.empty() = " << list.empty() << std::endl;
    // 检查列表的大小
    std::cout << "list.size() = " << list.size() << std::endl;

    // 在列表初始位置插入新元素
    list.insert(list.begin(), 2);
    // 在列表头部插入2个新的元素
    list.insert(list.begin(), 2, 3);

    auto it = list.begin();
    // 将迭代器指向指定位置
    std::advance(it, 3);
    // 向指定位置插入插入元素
    list.insert(it, 4);
    print_list(list, "插入元素后的列表");

    // 擦除指定范围的元素
    auto begin = list.begin();
    auto end = list.end();
    std::advance(begin, 4);
    std::advance(end, -1);
    list.erase(begin, end);
    print_list(list, "擦除元素后的列表");

    // 向列表末尾插入元素
    list.push_back(5);
    // 移除末尾元素
    list.pop_back();
    // 向列表头部插入元素
    list.push_front(6);
    // 移除列表头部元素
    list.pop_front();

    // 列表交换
    list.swap(another_list);
    print_list(list, "列表进行交换, List");

    // 移除符合指定条件的元素
    list.remove_if([](int n) { return n > 10; });

    // 反转列表
    list.reverse();
    print_list(list, "列表反转, List");

    // 移除列表中的重复元素
    list.unique();

    // 列表合并
    list.merge(another_list);
    print_list(list, "列表合并, List");

    // 列表排序
    list.sort();
    print_list(list, "列表排序, List");

    return 0;
}