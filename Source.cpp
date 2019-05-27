#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1251");
	string path = "myFile.txt";
	string msg = "tester";
	string out_path = "output.txt";
	char ch;
	vector<int> myVector(5);
	ifstream fs;
	ofstream output;
	output.open(out_path);
	fs.open(path);
	if (!fs.is_open() && !output.is_open())
	{
		cout << "Помилка відкриття файлу!" << endl;
	}
	else
	{
		cout << "Файл успішно відкрито!" << endl;
		for (int i = 0; i < myVector.size(); i++)
		{
			fs >> myVector[i];
		}
	}
	sort(myVector.begin(), myVector.end());

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << ' ';
	}

	if (binary_search(myVector.begin(), myVector.end(), 3))
	{
		cout << "\n число 3 знайдено у масиві!\n";
	}
		
	else 
	{
		cout << "\n число 3 не знайдено у масиві! \n";
	}

	for (int i = 0; i < myVector.size(); i++)
	{
		output << myVector[i] << " ";
	}

	fs.close();
	system("pause");
	return 0;
}