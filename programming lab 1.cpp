#include <iostream>
using namespace std;


void ex3() {
	int array[5];
	int* pointer = array;
	for (int i = 0; i < 5; i++) {
		cin >> *(pointer++);
	}
	pointer = array;
	for (int i = 0; i < 5; i++) {
		cout << *(pointer++) << " ";
	}
}

//Declare an array of 5 int elements with example values.Declare a pointer to show the first
//element of the array.Add 2 to the pointer and display the value it points to.
void ex4()
{
	int array[] = { 2,7,19,74,1 };

	int* pointer = &array[0];
	cout << *pointer << endl;
	pointer = pointer + 2;
	cout << *pointer << endl;

}

//5. Declare an array of 5 int elements with example values.Declare a pointer x to show the first
//element of the array.Then declare pointer y to show the second element of the array.
//Subtract the pointer y - x.Display the value.
void ex5()
{
	int array[] = { 2,7,19,74,1 };
	int* x = &array[0];
	cout << *x << endl;
	int* y = &array[1];
	cout << *y << endl;
	cout << *y - *x << endl;
}

/*7. Ask user about a number of numbers. Accept the number and create new array of the size
specified by the user using the operator 'new'. Ask user to enter the numbers one by one and
put them to the array. At the end display the array elements. In all the loops use pointers
instead of normal index, just to practice it.*/
void ex7()
{
	int n;
	cout << "Please, enter number of numbers in array" << endl;
	cin >> n;
	int* array{ new int[n] {} };
	int* pointer = array;
	cout << "Please, enter values of array." << endl;
	for (int i = 0; i < n; i++) {
		cin >> *(pointer++);
	}
	pointer = array;
	cout << "Numbers of array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(pointer++) << " ";
	}

}

//8. Declare an array with couple of elements. Reverse the array using two pointers.

void ex8() {
	int array[] = { 4,56,1,97,2,6 };
	int n = sizeof(array) / sizeof(array[0]);
	int* x = array;
	int* y = array + n - 1;

	while (x < y) {
		int temp = *x;
		*x = *y;
		*y = temp;
		x++;
		y--;
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";

	}
}

//9. Declare an array of 5 int elements with example values. Calculate the size of the array and display it.
// Then change the size of the array to see if the program works correctly. Hint: use sizeof operator

void ex9() {
int* arr;
	int arr2[] = { 1,2,3,4,5 };
	
	arr = new int[5];
	int n = sizeof(arr2) / sizeof(arr2[0]);
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		arr[i]=arr2[i];
	}
	arr = new int [6];
	
}

//10.Declare an array of 10 int elements with example values.Write program to copy all the odd values to another array and the even values
//to yet another one.Do not use any data structures other than arrays.Use pointers to accomplish this task
void ex10() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = sizeof(arr)/sizeof(arr[0]);
	//cout << a;
	int* even = new int[a];
	int* odd = new int[a];
	int j = 0;
	int k = 0;
	for(int i=0;i<a;i++){
		if (arr[i] % 2 == 0) {
			even[j++] = arr[i];
		}
	}
		
	for (int i = 0; i < j; i++) {
		cout << even[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < a; i++) {
		if (arr[i] % 2 != 0) {
			odd[k++] = arr[i];
		}
	}
	for (int i = 0; i < k; i++) {
		cout << odd[i] << " ";
	}
}


//11.Using array of pointers create a triangle array of size provided by the user and fill it with numbers provided by the user.
//After accepting the elements display the content of the array

void ex11() {

	int rowscolumns;
	cin >> rowscolumns;
	int** arr;
	arr = new int* [rowscolumns];
	for (int r = 0; r < rowscolumns; r++) {
		arr[r] = new int[r + 1];
		for (int c = 0; c <= r; c++)
			cin >> arr[r][c];
	}
	for (int r = 0; r < rowscolumns; r++) {
		for (int c = 0; c <= r; c++)
			cout << arr[r][c] << " ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	switch(n)

	case 3: {
		ex3();
		break;
	case 4:
		ex4();
		break;
	case 5:
		ex5();
		break;
	case 7:
		ex7();
		break;
	case 8:
		ex8();
		break;
	case 9:
		ex9();
		break;
	case 10:
		ex10();
		break;
	case 11:
		ex11();
		break;
	default:
		cout << "This option doesn't exist" << endl;
	}
	return 0;
}