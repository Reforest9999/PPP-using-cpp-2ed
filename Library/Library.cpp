#include "Library.h"

struct Invalid {};

ISBN::ISBN(const long& is) {
	// Do checking 
	if (true) {
		valid = true ;
		barcode = is;
	}
}
Book::Book(const std::string& a, const std::string& t, const ISBN& is)
	:author(a), title(t), isbn(is)
{
	try {
		if (!isbn.is_valid()) {
			throw Invalid{};
		}
	}
	catch (Invalid& e) {
		std::cerr << "Invalid ISBN identifier\n";
	}
}