#include <iostream>
using namespace std;
int countCharacter(string str)
{
	int count = str.size();
	return count;
}
int main()
{
	string str;
	cout << "Enter string: ";
	cin >> str;
	int result = countCharacter(str);
	cout << "Number of characters in string is: " << result;
}