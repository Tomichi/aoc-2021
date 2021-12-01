#include <iostream>
#include <string>

int main(){ 
   int current_num, previous_num;
   int deep = 0;
   bool is_number_setup = false;
   while(std::cin >> current_num) {
	if (!is_number_setup) {
		previous_num = current_num;
	        is_number_setup = true;
		continue; 
	}
        deep += (previous_num < current_num) ? 1 : 0;
	previous_num = current_num;
   }
   std::cout << deep << "\n";

return 0;
}
