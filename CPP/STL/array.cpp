//
// Created by igaozp on 2017/11/9.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

/**
 * 输出 array 数组中的元素
 *
 * @param array 需要输出的数组
 */
void print_array(const std::array<int, 5> &array) {
    for (auto i : array) {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
}

int main() {
    // 初始化一个 array 数组，需要提供元素类型及其数量
    std::array<int, 5> array = {5, 4, 3, 2, 1};
    print_array(array);

    // 通过 "at" 函数输出指定位置的元素
    std::cout << "array.at(0) = " << array.at(0) << std::endl;

    // 通过操作符 "[]" 访问相应位置的元素
    std::cout << "array[0] = " << array[0] << std::endl;

    // 访问数组的第一个元素
    std::cout << "array.front() = " << array.front() << std::endl;

    // 访问数组的最后一个元素
    std::cout << "array.back() = " << array.back() << std::endl;

    // 访问迭代器并排序
    std::sort(array.begin(), array.end());
    print_array(array);

    // 检查数组是否为空
    std::cout << "array.empty() = " << array.empty() << std::endl;

    // 检查数组元素的数量
    std::cout << "array.size() = " << array.size() << std::endl;

    // 输出数组的反转序列，不改变原始的数组
    std::reverse_copy(array.begin(), array.end(), std::ostream_iterator<int>(std::cout, "\t"));

    return 0;
}