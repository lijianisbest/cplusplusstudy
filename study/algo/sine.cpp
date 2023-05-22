//
// Created by admin on 2023/5/22.
//

#include <cstdint>
#include <vector>
#include <cmath>
#include <iostream>

const float pi = 3.141592354f;
using namespace std;

int main2() {
    uint32_t j;
    float grad, rad;
    std::vector<uint16_t> rv;
    uint16_t i, q;
    int samples_pair = 20;
    for (int k = 0; k < samples_pair; ++k) {
        grad = (360.0f / samples_pair) * k;
        rad = grad * (pi / 180.0f);
        i = sin(rad) * (std::numeric_limits<uint16_t>::max() / 2 + 1) + 0.5;
        q = cos(rad) * (std::numeric_limits<uint16_t>::max() / 2 + 1) + 0.5;
        cout << "i=" << i << ",q=" << q << std::endl;
    }
}