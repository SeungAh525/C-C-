#include <iostream>
using namespace std;

struct srec {
	char pid[10];
	int dyear, dmonth, ddate;
	char daddr[40];
};

void psrec(const srec &sr);

int main() {
	srec s = { "525mobile", 2019, 06, 25, "seoul" };
	psrec(s);
	return 0;
}

void psrec(const srec &sr) {
	cout << "product code : " << sr.pid << endl;
	cout << "\ndeliver date : " << sr.dyear << " (year)  ";
	cout << sr.dmonth << " (month)  ";
	cout << sr.ddate << " (day)" << endl;
	cout << "\naddress : " << sr.daddr << endl;
}