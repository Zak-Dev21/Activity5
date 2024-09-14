
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Max Limit for short data type: " << numeric_limits<short>::max() << endl;
	cout << "Min Limit for short data type: " << numeric_limits<short>::min() << endl;
	cout << "Size of short data type: " << sizeof(short) << endl;

}
