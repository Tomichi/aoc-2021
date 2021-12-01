#include <iostream>
#include <string>
#include <array>

int main() {
    bool is_reading_ok = false;
    std::array<int, 4> numbers;
    int index = 0;
    int increased_num = 0;
    while(std::cin >> numbers[index]) {
	if (!is_reading_ok && index == 3) {
	    is_reading_ok = true;
        }
     increased_num += is_reading_ok && numbers[(index + 5) % 4] < numbers[index] ? 1 : 0;
     index = (index + 1) % 4;
            
    }
    std::cout << increased_num << "\n";
return 0;
}
