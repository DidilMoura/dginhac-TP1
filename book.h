#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book {

private :
	std::string _title;
	std::string _author;
	std::string _language;
	std::string _type;
	std::string _ISBN;
	Date _p;
	bool isISBN();

public :
	Book(std::string title, std::string author, std::string language,
		 std::string _type, std::string ISBN, Date p);
	std::string getTitle();
	std::string getAuthor();
	std::string getLanguage();
	std::string getType();
	std::string getISBN();
	void infoBook();

};
#endif