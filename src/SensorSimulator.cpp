#include "SensorSimulator.h"

SensorSimulator::SensorSimulator(double t_min, double t_max, double p_min, double p_max)
    : temp_dist(t_min, t_max), press_dist(p_min, p_max), gen(rd()) {}

SensorData SensorSimulator::generate() {
    return { temp_dist(gen), press_dist(gen) };
}

std::vector<SensorData> SensorSimulator::generate_many(size_t count) {
    std::vector<SensorData> data;
    for (size_t i = 0; i < count; ++i) {
        data.push_back(generate());
    }
    return data;
}