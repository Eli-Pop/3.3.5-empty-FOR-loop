// The body of a for lop can be empty

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	int sum = 0;

	// sum the nubmers from 1 through 10
	for (i = 1; i <= 10; sum += i++); // This looop has no body.

	cout << "Sum is " << sum;

	cout << "\n";
	system("pause");
	return 0;
}