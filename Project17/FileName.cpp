#include <iostream>
using namespace std;
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
int main()
{
	string str;
	cout << "Enter string: ";
	cin >> str;
	int result = countVowel(str);
	cout << "Number of vowels in string is: " << result;
}