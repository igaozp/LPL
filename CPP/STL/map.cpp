//
// Created by igaozp on 2017/11/22.
//

#include <iostream>
#include <map>

/**
 * 重载输出流
 *
 * @param output 输出流
 * @param map map 集合
 * @return 重载的输出流
 */
std::ostream &operator<<(std::ostream &output, const std::map<std::string, int> &map) {
    for (auto x : map) {
        output << x.first << ": " << x.second << "\t";
    }
    return output << "\t" << std::endl;
}

int main() {
    // map 初始化
    std::map<std::string, int> map = {{"A", 1},
                                      {"B", 2},
                                      {"C", 3},
                                      {"D", 4},
                                      {"E", 5}};
    std::cout << map;

    // 获取指定的键的值
    std::cout << map.at("A") << std::endl;
    std::cout << map["A"] << std::endl;

    // 检查容器是否为空
    std::cout << map.empty() << std::endl;

    // 检查容器的容量
    std::cout << map.size() << std::endl;

    // 插入元素
    map.insert({"F", 6});
    std::cout << map;

    // 擦除元素
    map.erase("F");
    std::cout << map;

    // 检查 map 容器是否为空
    std::cout << map.empty() << std::endl;

    // 返回 map 元素数
    std::cout << map.size() << std::endl;

    // 寻找带有特定键的元素
    map.find("A");

    return 0;
}