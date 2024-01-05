#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double future_value = 1000000;  // Desired end value
    int number_of_days = 240;  // Number of trading days
    double daily_interest_rate = 0.01;  // 1% daily growth rate

    // Calculate the initial (present) value needed
    double present_value = future_value / pow((1 + daily_interest_rate), number_of_days);

    std::cout << "The required starting amount is approximately $" << std::fixed << std::setprecision(2) << present_value << std::endl;

    return 0;
}