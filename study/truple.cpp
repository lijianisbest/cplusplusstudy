//
// Created by admin on 2023/5/20.
//

#include "truple.h"
#include <iostream>
#include <vector>
#include <cmath>

/**
 * 定义三元组（a，b，c）的距离为D=|a-b|+|b-c|+|c-a|。
 * 给定3个非空整数集合，按照升序分别存三个数组，计算并输出所有可能的三元组中的最小距离
 * @param a
 * @param b
 * @param c
 * @return
 */

int calculateDistance(int a, int b, int c) {
    return std::abs(a - b) + std::abs(b - c) + std::abs(c - a);
}

int findMinDistance(const std::vector<int>& set1, const std::vector<int>& set2, const std::vector<int>& set3) {
    int minDistance = INT_MAX;

    for (int a : set1) {
        for (int b : set2) {
            for (int c : set3) {
                int distance = calculateDistance(a, b, c);
                minDistance = std::min(minDistance, distance);
            }
        }
    }

    return minDistance;
}

// 示例用法
int main() {
    std::vector<int> set1 = {-1, 0, 9};
    std::vector<int> set2 = {-25, -10, 10,11};
    std::vector<int> set3 = {2, 9, 17,30,41};

    int minDistance = findMinDistance(set1, set2, set3);

    std::cout << "Minimum Distance: " << minDistance << std::endl;

    return 0;
}
