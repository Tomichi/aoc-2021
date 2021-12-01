#include <iostream>
#include <string>
#include <array>

int main(){
    bool is_reading_ok = false;
    std::array<int, 4> numbers;
    int end_index = 0;
    int start_index = 0;
    int increased = 0;
    while(std::cin >> numbers[end_index]) {
	if (!is_reading_ok && end_index == 3){
	    is_reading_ok = true;
        }

	if (is_reading_ok) {
	    increased += numbers[start_index % 4] < numbers[end_index % 4] ? 1 : 0;
	    start_index = (start_index + 1) % 4;
            end_index = (end_index + 1) % 4; 
	} else {
  	    end_index += 1;
        }
    }
    std::cout << increased << "\n";


return 0;
}
