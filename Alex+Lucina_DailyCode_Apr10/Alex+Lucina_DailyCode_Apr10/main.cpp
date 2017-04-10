#include <iostream>

using namespace std;


int main() {

	int temp;
	char type;
	bool loop_1 = true;

	while (loop_1 == true) {
		cout << "Please give the type of temp. that your number will be (F, K, C)" << endl;
		cin >> type;
		if (type == 'K' || type == 'C' || type == 'F')
			loop_1 = false;
		else
			cout << "Invalid type. Please try again." << endl;
	}



	cout << "Ok, now what is the temp. (in that unit)?" << endl;
	cin >> temp;

	cout << "The given tempurature is:" << temp << "°" << type << endl;

	if (type == 'K') {
		cout << "The given tempurature is:" << (((temp - 273.5) * 9) / 5) + 32 << "°F" << endl;
		cout << "The given tempurature is:" << temp - 273.5 << "°C" << endl;
		if (temp <= 273.5) {
			cout << "Brrrrrr" << endl;
		}
		else if (temp >= 373.5) {
			cout << "BOILING NOISES" << endl;
		}
		else
			cout << "You are a fugitive from the law of averages." << endl;
	}

	if (type == 'F') {
		cout << "The given tempurature is:" << ((temp-32)*5)/9 << "°C" << endl;
		cout << "The given tempurature is:" << (((temp - 32) * 5) / 9) + 273.15 << "°K" << endl;
		if (temp <= 32) {
			cout << "Brrrrrr" << endl;
		}
		else if (temp >= 212) {
			cout << "BOILING NOISES" << endl;
		}
		else
			cout << "You are a fugitive from the law of averages." << endl;
	}

	if (type == 'C') {
		cout << "The given tempurature is:" << ((temp*9)/5)+32 << "°F" << endl;
		cout << "The given tempurature is:" << temp + 273.15 << "°K" << endl;
		if (temp <= 0) {
			cout << "Brrrrrr" << endl;
		}
		else if (temp >= 100) {
			cout << "BOILING NOISES" << endl;
		}
		else
			cout << "You are a fugitive from the law of averages." << endl;
	}
}