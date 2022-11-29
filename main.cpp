#include "date.h"
#include "book.h"
#include <iostream>

int main(int argc, char const *argv[]) {

	// Class Date Test
	Date love(2,14,2022);
	std::cout << "This year, Valentin's Day will be the " << love.getMonth() << "/"
			  << love.getDay() << "/" << love.getYear() << std::endl;

	// Class Book Test
	Date p1(1, 1, 1862);
	Book b1(Les Miserables, Victor Hugo, French, Tragedie, p1, '9780453009669');
	b1.infoBook();

	return 0;
}