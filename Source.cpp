#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1251");
	vector<int> myVector(5);
	string path = "myFile.txt";
	string out_path = "output.txt";
	ifstream fs;
	ofstream output;
	output.open(out_path);
	fs.open(path);
	if (!fs.is_open())
	{
		cout << "Помилка відкриття файлу для зчитування!" << endl;
	}
	else
	{
		cout << "Файл для зчитування успішно відкрито!" << endl;
		for (int i = 0; i < myVector.size(); i++)
		{
			fs >> myVector[i];
		}
	}
	!output.is_open() ? cout << "Помилка відкриття файлу для запису!" << endl : cout << "Файл для запису успішно відкрито!" << endl;
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
	output.close();
	system("pause");
	return 0;
}