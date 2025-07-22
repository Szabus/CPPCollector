#include <iostream>
#include <fstream>
#include "SensorSimulator.h"


int main() {
    SensorSimulator simulator(20.0, 30.0, 990.0, 1020.0);
    auto data = simulator.generate_many(10);

    std::cout << "Generated sensor data:\n";
    for (const auto& d : data) {
        std::cout << "Temperature: " << d.temperature << " °C, "
                  << "Pressure: " << d.pressure << " hPa\n";
    }

    std::ofstream csv("sensor_data.csv");
    csv << "temperature,pressure\n";
    for (const auto& d : data) {
        csv << d.temperature << "," << d.pressure << "\n";
    }
    csv.close();

    return 0;
}