#pragma once
class Cat {
private:
    // 所有 Cat 对象共享，记录当前仍存在的对象数量。
    static int numOfCats;

public:
    Cat();                         // 创建一个新对象
    Cat(const Cat& other);         // 复制时也会创建新对象
    Cat& operator=(const Cat& other) = default; // 赋值不创建新对象
    ~Cat();

    static int getNumOfCats();
};
