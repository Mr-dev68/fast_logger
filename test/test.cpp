#include "logging.hpp"

int main() {
    std::string test("test");
    LOG_INFO(" terminating threads \n");
    LOG_ERROR("Error accessing directory: %s ,%d,%d,%d,%f,%s\n", test.c_str(), 1, 2, 3, 4.5, "test");
    LOG_DEBUG("Error accessing directory: %s \n", test.c_str());
    LOG_WARN("Error accessing directory: %s \n", test.c_str());
    LOG_FATAL("Error accessing directory: %s \n", test.c_str());
}