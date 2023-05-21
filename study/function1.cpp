#include<iostream>
using namespace std;
struct Student
{
    /* data */
    std::string name;
    int age;
};
// 传地址
void changeNameAndAge(Student *stu){
    stu->age=16;
    stu->name="jiang bo";
}
// 传引用
void changeNameAndAge2(Student &stu){
    stu.age=17;
    stu.name="hao jiang bo";
}
// 传值
void changeNameAndAge3(Student stu){
    stu.age=18;
    stu.name="zhi hao jiang bo";
}
int main(){
    Student s;
    s.name="bo";
    s.age=15;
    cout<<"原始======"<<endl;
    cout<<s.name<<" "<<s.age<<endl;
    changeNameAndAge(&s);
    cout<<"传地址======="<<endl;
    cout<<s.name<<" "<<s.age<<endl;
    changeNameAndAge2(s);
    cout<<"传引用======="<<endl;
    cout<<s.name<<" "<<s.age<<endl;
    changeNameAndAge3(s);// 不改变
    cout<<"传值======="<<endl;
    cout<<s.name<<" "<<s.age<<endl;
}