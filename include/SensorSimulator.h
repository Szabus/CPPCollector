#pragma once
#include <vector>
#include <random>

struct SensorData {
    double temperature;
    double pressure;
};

class SensorSimulator {
public:
    SensorSimulator(double t_min, double t_max, double p_min, double p_max);
    SensorData generate();
    std::vector<SensorData> generate_many(size_t count);

private:
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_real_distribution<> temp_dist;
    std::uniform_real_distribution<> press_dist;
};