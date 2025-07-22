#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> sensors = {"temperature", "pressure", "status"};
    std::cout << "Sensors list:" << std::endl;
    for (const auto& s : sensors) {
        std::cout << "- " << s << std::endl;
    }
    return 0;
}