#include <iostream>
using namespace std;

int main() {
	unsigned long long int num;
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