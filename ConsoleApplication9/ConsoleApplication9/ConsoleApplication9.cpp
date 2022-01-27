
#include <iostream>
#include "string"
using namespace std;
int main()
{
	string text;
		int samohlaska = 0;
		int spoluhlaska = 0;
		int cisla = 0;
		int ostatneznaky = 0;

	cout << "Zapiste text:" << endl;
	getline(cin, text);

	for (int i = 0; i < text.length(); ++i)
	{
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
			text[i] == 'o' || text[i] == 'u' || text[i] == 'A' ||
			text[i] == 'E' || text[i] == 'I' || text[i] == 'O' ||
			text[i] == 'U')
		{
			++samohlaska;
		}
		else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
		{
			++spoluhlaska;
		}
		else if (text[i] >= '0' && text[i] <= '9')
		{
			++cisla;
		}
		else
		{
			++ostatneznaky;
		}
	}
	cout << "Samohlasok: " << samohlaska << endl;
	cout << "Spoluhlasok: " << spoluhlaska << endl;
	cout << "Cisel: " << cisla << endl;
	cout << "Ostatne znaky: " << ostatneznaky << endl;

	return 0;

}
