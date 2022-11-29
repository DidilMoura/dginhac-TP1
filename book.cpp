#include "book.h"

bool isISBN(std::string ISBN) {
	if (ISBN.size() != 13) 
		return false;
	for (int i = 0; i < ISBN.size(); i++) {
		char c = ISBN.at(i);
		if ((c < '0') || (c > '9')) 
			return false;
	}

	return true;
}

Book::Book(std::string title, std::string author, std::string language, std::string type,
	       Date p, std::string ISBN) : _title(title), _author(author), _language(language),
		   _type(type), _p(p), _ISBN(ISBN) {
	bool status = isISBN(std::string ISBN);
	assert (status && "Error in ISBN");
}

std::string Book::getTitle() {
	return _title;
}

std::string Book::getAuthor() {
	return _author;
}

std::string Book::getLanguage() {
	return _language;
}

std::string Book::getType() {
	return _type;
}

std::string Book::getISBN() {
	return _ISBN;
}

void Book::infoBook() {
	std::cout << "Information about your book :\n";
	std::cout << "Title --> " << _title << std::endl;
	std::cout << "Author --> " << _author << std::endl;
	std::cout << "Language --> " << _language << std::endl;
	std::cout << "Type --> " << _type << std::endl;
	std::cout << "Publish Date --> " << _p << std::endl;
	std::cout << "ISBN --> " << _ISBN << std::endl;
}
