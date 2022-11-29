#ifndef DATE_H
#define DATE_H

class Date {

private :
	int _month;
	int _day;
	int _year;
	bool isDate(int month, int day);
public :
	Date(int month, int day, int year);
	int getMonth();
	int getDay();
	int getYear();

};
#endif