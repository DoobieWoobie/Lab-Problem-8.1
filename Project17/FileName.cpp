#include <iostream>
#include <string>
using namespace std;
//string function
int countVowel(string str)
{
	int vowel = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
			|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			vowel++;
		}
	}
	return vowel;
}
//Main
int main()
{
	bool input = true;
	while (input)
	{
		string str;
		cout << "Enter string or Q to quit: ";
		getline(cin, str);
		int result = countVowel(str);
		if (str == "Q")
		{
			input = false;
		}
		else
		{
			cout << "Vowel count: " << result << endl;
		}
	}return 0;
}