#include<iostream>
#include<array>
using namespace std;

const int Season = 4;
const std::array<std::string,Season> Snames={"Spring","Summer","Fall","Winter"};
void fill(std::array<double,Season> *pa);
void fill(std::array<double,Season> da);
int main(){
    std::array<double,Season> expenses;
    fill(&expenses);
    fill(expenses);
    return 0;
}
void fill(std::array<double,Season> *pa){
    for (size_t i = 0; i < Season; i++)
    {
        /* code */
        
    }
    
}
void fill(std::array<double,Season> da);