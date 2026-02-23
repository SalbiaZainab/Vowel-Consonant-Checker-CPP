// Check whether a character is vowel or consonant
#include <iostream>
using namespace std;
int main()
{
	char character;
	cout << "Please enter any character: ";
	cin >> character;
	if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || 
	   character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
	{
		cout << character << " is an vowel.";
	}
	else
	{
		cout << character << " is a consonant.";
	}
}
