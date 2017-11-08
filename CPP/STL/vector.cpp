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
    // ʹ�ø��������ݳ�ʼ�� vector ����
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    print_vector(v1);
    std::cout << std::endl;

    // ������ʼ�� vector �����Ĵ�С��Ĭ������Ϊ 0
    std::vector<int> v2(5);
    print_vector(v2);
    std::cout << std::endl;

    // ͨ���������� vector ����ָ��λ�õ�Ԫ��
    std::cout << "ͨ�� at �������� vector ������ָ��λ�õ����� v1.at(0): " << v1.at(0) << std::endl;

    // ͨ����������Ԫ�صķ�������ָ��λ�õ�Ԫ��
    std::cout << "ͨ������ķ������� vector ������ָ��λ�õ����� v1[0]: " << v1[1] << std::endl;

    // ͨ���������� vector �����ĵ�һ�������һ��Ԫ��
    std::cout << "ͨ���������� vector �����ĵ�һ�������һ��Ԫ�� v1.front() = " << v1.front() << ", v1.back() = " << v1.back()
              << std::endl;

    // ��� vector �����Ƿ�Ϊ��
    std::cout << "vector �����Ƿ�Ϊ��: " << v1.empty() << std::endl;

    // ��� vector ����������
    std::cout << "vector ����������: " << v1.size() << std::endl;

    // ��� vector �������������
    std::cout << "vector �����������ɵ��������: " << v1.max_size() << std::endl;

    // ��ȡ vector ������һ��Ԫ�صĵ�����
    auto it = v1.begin();
    // �������в����µ�Ԫ�أ�ͨ��������ȷ�������λ��
    v1.insert(it, 6);
    // "it" ���ٺϷ�����ȡ��ֵ
    it = v1.begin();
    // ��������
    v1.insert(it, {7, 8, 9});
    std::cout << "������Ԫ�غ������: " << std::endl;
    print_vector(v1);

    // �� vector ����������Ԫ��
    v1.push_back(10);
    print_vector(v1);
    // ɾ�� vector ���������һ��Ԫ��
    v1.pop_back();
    print_vector(v1);

    return 0;
}