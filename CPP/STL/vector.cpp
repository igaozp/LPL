//
// Created by igaozp on 2017/11/8.
//

#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &vec) {
    for (auto x: vec) {
        std::cout << x << '\t';
    }
    std::cout << '\n';
}

int main() {
    // 使用给定的数据初始化 vector 容器
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    print_vector(v1);
    std::cout << std::endl;

    // 给定初始化 vector 容器的大小，默认数据为 0
    std::vector<int> v2(5);
    print_vector(v2);
    std::cout << std::endl;

    // 通过函数访问 vector 容器指定位置的元素
    std::cout << "通过 at 函数访问 vector 容器中指定位置的数据 v1.at(0): " << v1.at(0) << std::endl;

    // 通过访问数组元素的方法访问指定位置的元素
    std::cout << "通过数组的方法访问 vector 容器中指定位置的数据 v1[0]: " << v1[1] << std::endl;

    // 通过函数访问 vector 容器的第一个和最后一个元素
    std::cout << "通过函数访问 vector 容器的第一个和最后一个元素 v1.front() = " << v1.front() << ", v1.back() = " << v1.back()
              << std::endl;

    // 检查 vector 容器是否为空
    std::cout << "vector 容器是否为空: " << v1.empty() << std::endl;

    // 检查 vector 容器的容量
    std::cout << "vector 容器的容量: " << v1.size() << std::endl;

    // 检查 vector 容器的最大容量
    std::cout << "vector 容器可以容纳的最大数量: " << v1.max_size() << std::endl;

    // 获取 vector 容器第一个元素的迭代器
    auto it = v1.begin();
    // 向容器中插入新的元素，通过迭代器确定插入的位置
    v1.insert(it, 6);
    // "it" 不再合法，获取新值
    it = v1.begin();
    // 插入数组
    v1.insert(it, {7, 8, 9});
    std::cout << "插入新元素后的容器: " << std::endl;
    print_vector(v1);

    // 在 vector 容器最后插入元素
    v1.push_back(10);
    print_vector(v1);
    // 删除 vector 容器的最后一个元素
    v1.pop_back();
    print_vector(v1);

    return 0;
}