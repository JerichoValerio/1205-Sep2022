
#include <iostream>
#include <cstring>
#include <string>

#define STRMAX 80
#define NAMEMAX 50

using namespace std;

void TestCString()
{

	// ===
	char s3[] = "A";  
	if (s3[0] == 'A')
	{
		std::cout << "the first letter of the string s3 is 'A'." << std::endl;
	}

	//if (s3[0] == "A") // This is WRONG! - it attempts to compare one element of array s3 with an address expression for "A"
	//{

	//}

	// C-string 
	char str[] = "Hello!";
	char str2[10] = "Hello!";

	char s[80];
	strcpy(s, "One "); // string copy
	strcat(s, "Two "); // string concatenation 
	strcat(s, "Three ");

	char s2[80];
	strncpy(s2, str2, STRMAX);
	strncat(s2, s, STRMAX - strlen(s));

	std::cout << s << std::endl;
	std::cout << s2 << std::endl; 

	char name[50];
	std::cout << "enter your name:";
	std::cin.getline(name, NAMEMAX);

	std::cout << "Name is:" << name << std::endl;

	std::cout << "printing name using a for loop" << std::endl;
	int length = strlen(s2);
	for (int i = 0; i < length; i++)
	{
		std::cout << s2[i];
	}
}

void TestStrtok()
{
	// lets assume we have a string "This is a string input"
	// and we want to break it up into individual substrings
	/*
	This 
	is 
	a
	string 
	input
	*/

	// strtok - string token
	// 

	char s[] = "This is a string input";
	
	char* strp1 = NULL; // old C style null pointer assignment
	char* strp2 = nullptr; // the new null pointer assignment

	char* ps = strtok(s, " ");
	ps = strtok(nullptr, " ");


	char string_to_parse[81];
	std::cout << "input a string delimited with comma space to be parsed:";
	std::cin.getline(string_to_parse, 81);

	char* result = strtok(string_to_parse, "-");
	while (result != nullptr)
	{
		std::cout << "token: " << result << std::endl;
		result = strtok(nullptr, "-");
	}
}


void TestTypeConversion()
{
	int i = 12;
	float f = 2.2;
	int j = f;

	float f2 = i;

	auto i2 = 0; // 
	auto s = 'A';
	auto s2 = "A";
	auto b1 = true;
	auto num = 6L;
	auto num2 = 2'000'000'000;
	auto binNum = 0b11101110;
	auto hexNum = 0xFE;
}

void TestStringType()
{
	string firstName("Tom");
	string lastName("Brady");

	string fullName = firstName + " " + lastName;
	cout << fullName << endl;
	cout << "print the 4th char of fullname:" << fullName[3] << endl;

	if (fullName != firstName)
	{
		cout << "not equal" << endl;
	}
	else
	{
		cout << "equal" << endl;
	}

	string dogType = "enter a dog type:";
	string dog;
	cout << dogType;
	cin >> dog;
	cout << endl << dog << endl; // captures up to the first blank characters into the string object

	for (int i = 0; i < dog.size(); ++i)
	{
		cout << dog[i] << endl;
	}

	cout << "streamsize max - a very large numer: " << numeric_limits<streamsize>::max() << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string name, address;
	cout << "Please enter your name:";
	getline(cin, name);
	cout << "Please enter your address:";
	getline(cin, address);

	cout << endl << name << endl << address << endl;

	string result = "Name: " + name + " Address: " + address;

	// convert a string to an integer
	string age = "34";
	auto ageNum = stoi(age);
	cout << "age: " << age << "ageNum: " << ageNum << endl;

	// to convert a string to a floating point you can use stof()
}
