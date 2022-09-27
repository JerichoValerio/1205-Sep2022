
#include <iostream>
#include <cstring>

#define STRMAX 80
#define NAMEMAX 50

void TestCString()
{

	// ===
	char s3[] = "A";  
	if (s3[0] == 'A')
	{
		std::cout << "the first letter of the string s3 is 'A'." << std::endl;
	}

	//if (s3[0] == "A") // WRONG! - attempts to compare one element of array s3 with an address expression for "A"
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