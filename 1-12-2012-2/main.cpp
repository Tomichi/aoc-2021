#include <iostream>
#include <string>
#include <array>

int main() {
    bool is_array_fill = false;
    std::array<int, 4> numbers;
    int index = 0;
    int increased_num = 0;
    while(std::cin >> numbers[index]) {
       is_array_fill = is_array_fill || (!is_array_fill && index == 3);
       increased_num += is_array_fill && numbers[(index + 1) % 4] < numbers[index] ? 1 : 0;
       index = (index + 1) % 4;
    }
    std::cout << increased_num << "\n";
return 0;
}
