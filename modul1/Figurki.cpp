#include <iostream>
#include "Figurki.h"

using namespace std;

void krest::draw()
{
	cout << " * " << endl;
	cout << "***" << endl;
	cout << " * " << endl;
}

void trap::draw()
{
	cout << " *** " << endl;
	cout << "*   *" << endl;
	cout << "*****" << endl;
}

void figurki::draw()
{
}

void ch() {
	int k;
	cin >> k;
	switch (k) {
	case 1: {
		krest q;
		q.draw();
		break; }
	case 2: {
		trap q;
		q.draw();
		break; }
	default: {
		cout << "Ones more" << endl;
		ch();
	}
	}
}