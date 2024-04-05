//brief: 测试回调函数
#include <iostream>
//函数指针
typedef void (*callBackFunc)(int,int);

void printMax(int a,int b){
    std::cout << "The big is " << (a > b ? a : b) <<std::endl;
    std::cout << "The small is " << (a < b ? a : b) <<std::endl;
}

void compare(int a,int b, callBackFunc callBack){
    if (a != b) callBack(a,b);
    else    std::cout << "Both are equal"<<std::endl;
}

int main() {

    compare(2,3,printMax);
    return 0;
}