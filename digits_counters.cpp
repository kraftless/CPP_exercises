#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int digits = 0;
	while (num / 10) 
	{   
		digits++;
		num = num / 10; // num/10 will be traunted to integer and stored for next loop
	}

	cout << "The digits of input is:"<< digits+1 << endl;   
	
	return 0;
}