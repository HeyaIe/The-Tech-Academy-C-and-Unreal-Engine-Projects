#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

#include <vector>
using std::vector;


void display(const double *array, double sentinel)
{
	while (*array != sentinel)
	{
		cout << *array++ << " "; // Display data at pointer, increment pointer
	}
	cout << endl;
}
void display(const vector<int> *const v)
{
	for (int num : *v)
	{
		cout << num << " ";
	}
	cout << endl;
}
void display(const int *const array, size_t size) // Takes a pointer of integers, and size
{
	for (size_t i = 0; i < size; ++i)
	{
		cout << array[i] << " "; // Use subscript notation to display elements in the array
	}
	cout << endl;
}

int* CreateArray(size_t size, int init_value)
{
	int* newStorage = new int[size]; // Creates an array of integers on the heap
	for (size_t i = 0; i < size; ++i)
	{
		newStorage[i] = init_value; // Initialize elements in the array
	}
	return newStorage; // Returns a pointer
}

int main()
{
	// Initializing a vector of integers
	// vector<int> nums{ 1, 2, 5, 10, 20 };
	// Initializing pointer
	// vector<int>* vector_ptr = &nums; // Points to the address of nums
	// Pointers have a size of 4 bytes
	// cout << sizeof(nums_ptr);

	/* ---------------- Dereferencing a vector pointer ---------------- */
	// for (int num : *vector_ptr)
	// {
	//	 cout << num << " ";
	// }
	// cout << endl;
	// cout << (*vector_ptr).at(2) << endl;


	/* ------------------ Dereferencing pointers ------------------ */
	// int num1{ 10 };
	// int num2{ 50 };
	// int* num_ptr{ &num1 };

	// cout << *num_ptr << endl; // 10
	// *num_ptr = 13;
	// cout << *num_ptr << endl; // 13
	// num_ptr = &num2;
	// cout << *num_ptr << endl; // 50

	/* ------------ Pointer arithmetic ---------------- */
	//int nums[]{ 100, 95, 20, 50, 13, -1 };
	//int* nums_ptr{ nums };
	//while (*nums_ptr != -1)
	//{
	//	cout << *nums_ptr << endl;
	//	nums_ptr++;
	//	// *nums_ptr++;
	//}

	/* -------------- Contants with pointers ----------------- */
	// int num1{ 100 };
	// int num2{ 10 };
	// const int* num_ptr1{ &num1 }; // Unable to change the data that pointer points to
	// num_ptr1 = &num2; // Able to change where the pointer points to, as long as it's of the same type

	// cout << *num_ptr1 << endl; // Pointer 1

	// int* const num_ptr2{ &num1 }; // Unable to switch pointer
	// *num_ptr2 = 99; // Able to change the data that pointer points to

	// cout << *num_ptr2 << endl; // Pointer 2

	// const int* const num_ptr3{ &num2 }; // Unable to switch pointers, unable to change data

	// cout << *num_ptr3 << endl; // Pointer 3

	/* ----------- Passing references to a function ---------------- */
	// double nums[]{ 100.2, 92.2, 10.5, 88.3, -1 };
	// display(nums, -1);

	// vector<int> nums{ 10, 20, 30, 40, 2 };
	// display(&nums);

	/* ----------- Returning a pointer from a function ------------- */
	// size_t size = 0;
	// cout << "Array size: ";
	// cin >> size;

	// int* intArray = CreateArray(size, 0); // Create an array on the heap, initialize values to 0
	// display(intArray, size);
	// delete intArray; // Deallocate memory

	return 0;
}
