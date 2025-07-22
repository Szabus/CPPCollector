#include <iostream>
#include "SensorSimulator.h"

int main() {
    SensorSimulator simulator(20.0, 30.0, 990.0, 1020.0);
    auto data = simulator.generate_many(10);

    std::cout << "Generated sensor data:\n";
    for (const auto& d : data) {
        std::cout << "Temperature: " << d.temperature << " °C, "
                  << "Pressure: " << d.pressure << " hPa\n";
    }
    return 0;
}