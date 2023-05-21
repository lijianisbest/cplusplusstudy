#include<iostream>
#include<vector>
using namespace std;
int main(){
   //C++11固定长度使用array
 vector<int> myvector;
 for (int i = 0; i < 10; i++)
 {
    /* code */
    myvector.push_back(i);
 }
 for (int i = 0; i < 10; i++)
 {
    /* code */
    int res = myvector.at(i);
    cout<<res<<" ";
 }
  // 默认初始化
    vector<int> v1;
    // 列表初始化
    vector<char> v2={'a','b'};
    // 直接初始化
    vector<short>v4(5);
    vector<short>v5(5,100);

    cout<<v5[6];//越界访问

    // 怎么遍历所有元素？
    for (size_t i = 0; i < v5.size(); i++)
    {
        /* code */
        cout<<v5.at(i)<<" ";
    }
    cout<<endl;
    for (auto &&i : v5)
    {
      cout<<i<<" ";
    }
    //添加元素
    v5.push_back(10);
    cout<<endl;
    cout<<v5.size()<<endl;
    //添加倒叙的元素
    for (size_t i = 10; i > 0; i--)
    {
      /* code */
      v5.push_back(i);
    }
     for (size_t i = 0; i < v5.size(); i++)
    {
        /* code */
        cout<<v5.at(i)<<" ";
    }

}