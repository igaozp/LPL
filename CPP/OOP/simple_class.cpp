//
// Created by igaozp on 2017/12/7.
//

#include <iostream>

class Person {
public:
    std::string name;
    int age;

    // 无参构造函数
    Person() = default;

    // 有一个参数的构造函数
    Person(std::string name) : name(name) {}

    // 有两个参数的构造函数
    Person(std::string name, int age) : name(name), age(age) {}

    // 析构函数，对象销毁时执行
    ~Person();

    void set_name(std::string name) {
        this->name = name;
    }

    void set_age(int age) {
        this->age = age;
    }

    void show_info() {
        std::cout << "Name: " << this->name << "\t";
        std::cout << "Age: " << this->age << "\t";
        std::cout << std::endl;
    }
};

// 在类外定义析构函数
Person::~Person() {
    std::cout << "Object is being deleted" << std::endl;
}

int main() {
    // 通过三种方式初始化对象
    Person person;
    person.set_age(66);
    person.set_name("This is a name");
    person.show_info();

    Person person1("This is a name");
    person1.set_age(44);
    person1.show_info();

    Person person2("This is a name", 55);
    person2.show_info();

    return 0;
}