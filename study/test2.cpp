#include <iostream>

int main()
{
    int total = 20, num = 6;
    double avg = total / num;
    std::cout << avg<<std::endl;
    // C++ 强制类型转换 4种 静态转换
    std::cout<<static_cast<double>(total)/num<<std::endl;
    return 0;
}

