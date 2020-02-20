#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			} else {
				print(cout, total) << endl;
				total = trans;
			}
		}
	}else{
		cerr << "No data!?" << endl;
		return -1;
	}
	return 0;
}