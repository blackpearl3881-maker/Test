#include <iostream>
using namespace std;

//Recursion

//Exercise 1
int natural(int n) {
	cout << n <<" ";
	if (n == 50)
		return 50;
	else{
		
		return natural(n + 1);
	}	
}
//Exercise 2
int sum3(int n) {
//	cout << n << " ";
	if (n == 1)
		return 1;
	else {
		return n + sum3(n - 1);
	}
}
//Exercise 3
int digit(int n) {
	if (n == 0)
		return 0;
	else
		return 1 + digit(n / 10);
}
//Exercise 4
int sum4(int n) {
	if (n == 0)
		return 0;
	else {
		return  n%10 + sum4(n / 10);
	}		
}
//Exercise 5
bool prime(int n, int i = 2) {
	if (n == i)
		return 1; 
	else if (n % i == 0)
		return 0;
	else
		return prime(n, 1 + i); 
}
//Exercise 6
int sum(int a, int b) {
	if (a + 1 == b)
		return 0;
	else
		return a + 1 + sum(a + 1, b);
}

int sum1(int first, int last, int array[]) {
	if (first == last)
		return array[first];
	return array[first] + sum1(first + 1, last, array);
}
int sum2(int array[], int size) {
	if (size == 1)
		return array[size - 1];
	return array[size - 1] + sum2(array, size - 1);
}
//Exercise 7
int exponent(int a, int b) {
	if (a == 0)
		return 1;
	else
		return b * exponent(a - 1, b);
}
//Exercise 8
void test(int a) { 
	if (a > 0) {
		cout << a % 2;
		test(a / 2);
	}
}
/*a a%2 a/2
14	0	7
7	1	3
3	1	1
1	1	0
0	
output: 0111
*/

void test2(int a) {
	if (a > 0) {
		test(a / 2);
		cout << a % 2;
	}
}

/*a a%2 a/2
14	0	7
7	1	3
3	1	1
1	1	0
0
output: 1110

difference: how they are stacked in the memory
*/

//Exercise 9
/*
mystery(5)
=2*mystery(4) 
=2*2*mystery(3)
=2*2*2*mystery(2)
=2*2*2*2*mystery(1)
=2*2*2*2*2*mystery(0)
=2*2*2*2*2*1
=32 option: B */

//Exercise 10
int i = 0;
void print(int arr[], int size,int i) {
	if (i >= size)
		return;
	else {
		cout << arr[i] << " ";
		print(arr,size, i + 1);
	}
}
void print2(int array[], int size) {
	if (size == 0)
		return;
	else {
		cout << array[size - 1] << " ";
		print2(array, size - 1);
	}
}
//Exercise 11
int largest_element(int n, int arr[]) {

	if (n == 1) 
		return arr[0];

	return max(arr[n - 1], largest_element(n - 1, arr));
}
int maximum(int array[], int size, int max = 0) {
	if (size == 0)
		return max;
	else if (array[size - 1] > max)
		return array[size - 1];
	return maximum(array, size - 1, max);
}
int main() {
/*	cout << "=====Exercise 1:====="<<endl;
	natural(0);
	cout << "=====Exercise 2:====="<<endl;
	cout<< digit(234);
	cout << "=====Exercise 3:====="<<endl;
	cout << sum4(234);
	cout << "=====Exercise 4:====="<<endl;
	cout << prime(7);
	cout << "=====Exercise 5:====="<<endl;
	int n = sum(2, 4);
	cout << "=====Exercise 6:====="<<endl;
	int n = exponent(3, 2); 
	cout << "=====Exercise 7:====="<<endl;
	cout << "Tracd up";
	cout << "=====Exercise 8:====="<<endl;
	cout << "Traced up";
	cout << "=====Exercise 9:====="<<endl;
	cout << "Traced up";
	cout << "=====Exercise 10:=====" << endl;
	int arr[7] = {3,9,10,27,38,43,82};
	print(arr, 7, i);*/
	cout << "=====Exercise 11:=====" << endl;
	int arr[7] = { 3,9,10,27,38,43,82 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << largest_element(n , arr);
	cin.ignore();
	return 0;
}