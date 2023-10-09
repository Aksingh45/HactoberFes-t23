

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Get the vector
	vector<int> a = { 1, 45, 54, 71, 76, 12 };

	int sum = 0;

	// Print the vector and calculate sum
	cout << "Vector: ";
	for_each(a.begin(), a.end(), [&](int i) {
		cout << i << " ";
		sum += i;
	});

	// Print the sum of the vector
	cout << "\nSum = " << sum << endl;
	return 0;
}


