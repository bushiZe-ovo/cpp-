#include "Cat.h"

// 静态数据成员只定义、初始化一次。
int Cat::numOfCats = 0;

Cat::Cat() {
    ++numOfCats;
}

Cat::Cat(const Cat&) {
    ++numOfCats;
}

Cat::~Cat() {
    --numOfCats;
}

int Cat::getNumOfCats() {
    return numOfCats;
}
