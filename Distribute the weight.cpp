/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include <bits/stdc++.h>
using namespace std;

int func2(int *arr, int size, unsigned long long int mid) {
	unsigned long long int sum = 0;
	int count = 1;

	for(int i = 0; i < size; i++) {
		if((sum + arr[i]) > mid) {
			count++;
			sum = arr[i];
		}
		else {
			sum += arr[i];
		}
	} 

	return count;
}

void func(int *arr, int size, int m) {

	for(int i = 0; i < size; i++) {
		cin>>arr[i];
	}

	int max = 0;
	unsigned long long int sum = 0;
	unsigned long long int l = 0;
	unsigned long long int h = 0;
	unsigned long long int mid = 0;

	for(int i = 0; i < size; i++) {
		sum += arr[i];
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	// max = arr[size - 1];

	l = max;
	h = sum;
	while(l < h) {
		mid = l + (h-l)/2;

		int count = func2(arr, size, mid);
		if(count <= m) {
			h = mid;
		}
		else {
			l = mid + 1;
		}
	}

	cout << l<<endl;

}

int main()
{
	int t = 0;
	cin >> t;

	while(t--) {
		int size;
		int m;

		cin >> size >> m;

		int *arr = new int[size];

		func(arr, size, m);
	}
}