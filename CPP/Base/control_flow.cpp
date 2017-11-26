//
// Created by igaozp on 2017/11/26.
//

#include <iostream>
#include <vector>

/**
 * 基本控制流程的使用
 *
 * @return 0
 */
int main() {
    std::vector<int> vector(10);

    for (int i = 0; i < 10; i++) {
        vector[i] = i;

        switch (vector[i] % 2) {
            case 0:
                vector[i] = -vector[i];
                break;
            case 1:
                vector[i] = vector[i] * 2;
            default:
                break;
        }
    }

    for (auto x : vector) {
        std::cout << x << "\t";
    }

    while (!vector.empty()) {
        vector.erase(vector.begin());
    }

    if (vector.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        for (auto x : vector) {
            std::cout << x << "\t";
        }
    }

    return 0;
}