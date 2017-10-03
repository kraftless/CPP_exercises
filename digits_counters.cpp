#include <iostream>
using namespace std;

int main() {
	unsigned long long int num;
	cout << "please input an non-negative integer (19 digits at most): ";
	cin >> num;
	int digits = 1;
	while (num / 10) 
	{   
		digits++;
		num = num / 10; // num/10 will be traunted to integer and stored for next loop
	}

	cout << "The digits of input is:"<< digits << endl;   
	
	return 0;
}