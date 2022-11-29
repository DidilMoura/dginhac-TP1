#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
	Date love(2,14,2022);
	std::cout << "This year, Valentin's Day will be the " << love.getMonth() << " / "
			  << love.getDay() << " / " << love.getYear() << std::endl;
	return 0;
}