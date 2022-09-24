#include <iostream>

void BasicPointers()
{
	int* ip;
	int x = 123;
	ip = &x;  // & address of is used here to get the address of x and put it in ip pointer

	char* cp;
	char c = 'a';
	cp = &c; 

	char* cp2 = nullptr; // initialize a pointer that does not point to any object

	// this is called dereferencing a pointer e.g. *cp
	char d = *cp; // set the char value at the address pointer is pointing to, to the var d

	*cp = 'x'; // changing the value of pointed-to char

}

void SwapCopies(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void Swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void ArrayAccessByPointer()
{
	int arr[] = { 10, 20, 30, 40, 40 };
	// the value at arr is address of first element, e.g. 0x00eff72c 

	std::cout << "arr[1]=" << arr[1] << "\n";
	
	int* pi;      // declare an integer pointer 
	pi = &arr[0]; // & is the address of operator 
	// now the value at pi is also the address of the first element of array arr e.g. 0x00eff72c

	// arr[0]
	std::cout << "value at pi+0 a.k.s. arr[0] = " << *pi << std::endl;
	// arr[1]
	std::cout << "value at pi+1 a.k.s. arr[1] = " << *(pi + 1) << std::endl;
}

// A function that uses a pointer to initialize an array of size n
void InitializeArray(int* p, int n)
{
	while (n-- > 0)
	{
		*p = 0;	// assign 0 to the element pointed to
		++p;	// point to the next element 
	}
}

void BasicArrayExample()
{
	char arr[5];	// declared char array of size 5
	int intArr[10]; // int array of size 10 
	//                 0  1   2   3   4
	int numbers[5] = { 5, 10, 15, 20, 25 };
	int a1 = numbers[0];
	int a4 = numbers[3];

	numbers[4] = 30;

	int total = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];

	if (numbers[0] == 0)
	{
		std::cout << " equal to zero\n";
	}
	else if (numbers[0] < 0)
	{
		std::cout << " less than zero\n";
	}
	else
	{
		std::cout << " greater than zero\n";
	}

	while (numbers[0] > 0 )
	{
		numbers[0]--;
	}

	do
	{
		numbers[1]--;
	} while (numbers[1] > 0);

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "i=" << i << std::endl;
	}
}



bool IsEven(int num)
{
	int remainder = num % 2;

	if (remainder == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void BasicConditionals()
{
	int num1 = 23;
	int num2 = 36;

	bool isNum1Even = IsEven(num1);
	bool isNum2Even = IsEven(num2);

	std::cout << " isNum1Even: " << isNum1Even << " isNum2Even: " << isNum2Even << std::endl;
}

void TestGetArraySize()
{
	int arr[] = { 1,2,3,4,5 };
	int len1 = sizeof(arr) / sizeof(arr[0]);

	std::cout << "len: " << len1;
}

