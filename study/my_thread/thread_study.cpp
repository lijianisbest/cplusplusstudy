//
// Created by admin on 2023/5/21.
//

#include "thread_study.h"
#include <iostream>
#include <thread>

using namespace std;

/**
 *
 */
void thread_1(){
    cout<<"thread_1"<<endl;
}
void thread_2(int x){
    cout<<"thread_2"<<" para is:"<<x<<endl;
}
// detach方式，启动的线程自主在后台运行，当前的代码继续往下执行，不等待新线程结束。
// join方式，等待启动的线程完成，才会继续往下执行。
int main(){
    thread first(thread_1);// 开启线程
    thread second (thread_2,100);// 开启线程
    cout<<"main thread"<<endl;
//    first.join();// 必须说明添加线程的方式
//    second.join();
//    cout<<"sub thread is over..."<<endl;

    first.detach();
    second.detach();
    for (int i = 0; i < 10; ++i) {
        cout<<"main thread is waiting"<<endl;
    }
    return 0;
}