//
// Created by igaozp on 2017/11/19.
//

#include <iostream>
#include <set>

/**
 * 重载输出流
 *
 * @param output 输出流
 * @param set set 集合
 * @return 重载后的输出流
 */
std::ostream &operator<<(std::ostream &output, std::set<int> &set) {
    for (auto x : set) {
        output << x << "\t";
    }
    return output << std::endl;
}

/**
 * set 集合的基本操作
 *
 * @return 0
 */
int main() {
    // set 容器初始化
    std::set<int> set = {1, 2, 3, 4, 5};
    std::cout << set;

    // 插入元素，容器中的元素始终保持不重复
    set.insert(1);
    set.insert(6);
    std::cout << set;

    // 擦除元素
    set.erase(6);
    std::cout << set;

    // 容器的元素数量
    std::cout << set.size();

    // 容器受否为空
    std::cout << set.empty();

    // 指定元素的数量
    std::cout << set.count(1);

    // 查找指定元素，如果找到返回相应元素的迭代器，否则返回 end() 迭代器
    set.find(1);

    return 0;
}