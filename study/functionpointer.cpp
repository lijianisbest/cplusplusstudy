// 函数指针（Function Pointer）是指向函数的指针变量，也就是存储函数地址的指针。
// 通过函数指针可以在程序运行的时候动态地调用不同的函数，增强程序的灵活性和可扩展性
// 函数指针变量，需要使用如下语法 ReturnType (*FunctionName)(ParameterList);
// 其中，ReturnType 是函数的返回类型，FunctionName 是函数的名称，ParameterList 是函数的参数列表。
// 括号内的星号是必需的，否则声明的类型会被视为函数类型而不是函数指针类型。
#include<iostream>
using namespace std;
double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));
int main(){
int code;
code=10;
estimate(code,betsy);
estimate(code,pam);
return 0;
}
double betsy(int lens){
    return 0.5*lens;
}
double pam(int lens){
    return 0.3*lens+0.0004*lens*lens;
}
void estimate(int lens,double (*pf)(int)){
    cout<<lens<<endl;
    cout<<(*pf)(lens)<<endl;
}