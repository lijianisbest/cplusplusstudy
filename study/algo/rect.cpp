//
// Created by admin on 2023/5/22.
//

#include <cstdint>
#include <vector>
#include <cmath>
#include <iostream>
#include "rect.h"

// Function to generate a rectangular wave
std::pair<std::vector<uint16_t>, std::vector<uint16_t>>
generate_rectangular_wave(uint16_t amplitude, uint16_t offset, size_t samples) {
    std::vector<uint16_t> i_data(samples);
    std::vector<uint16_t> q_data(samples);

    uint16_t high = amplitude + offset;
    uint16_t low = offset;
    bool is_high = true;

    for (size_t i = 0; i < samples; ++i) {
        // Half of the samples will be high, half will be low.
        if (i == samples / 2) {
            is_high = !is_high;
        }

        // Set the current sample to the appropriate value.
        uint16_t current_sample = is_high ? high : low;

        // Assign the same value to both I and Q for simplicity.
        i_data[i] = current_sample;
        q_data[i] = current_sample;
    }

    return {i_data, q_data};
}

int main() {
    try {
        int x = 15/0;
    } catch (std::exception &p) {
        std::cout << p.what() << std::endl;
    abort();}
    ::find();
    clock_t start = clock();
    size_t samples = 1000;
    uint16_t amplitude = 500;
    uint16_t offset = 500;

    auto [i_data, q_data] = generate_rectangular_wave(amplitude, offset, samples);
    std::cout << clock() - start;
    return 0;
}