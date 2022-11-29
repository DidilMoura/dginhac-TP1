#include "date.h"
#include <assert.h>

bool Date::isDate(int month, int day) {
	if ((day < 1) || (day > 31)) return false;
	if ((month < 1) || (month > 12)) return false;
	if (((month == 4) || (month == 6) || (month == 9) || (month ==11)) && (day > 30)) return false;
	return true;
}

Date::Date(int month, int day, int year) : _month(month), _day(day), _year(year) {
	bool status = isDate(month, day);
    assert(status && "Date is not valid");
}

int Date::getMonth() {
	return _month;
}

int Date::getDay() {
	return _day;
}

int Date::getYear() {
	return _year;
}
