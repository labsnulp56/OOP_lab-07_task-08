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
		cout << "������� �������� ����� ��� ����������!" << endl;
	}
	else
	{
		cout << "���� ��� ���������� ������ �������!" << endl;
		for (int i = 0; i < myVector.size(); i++)
		{
			fs >> myVector[i];
		}
	}
	!output.is_open() ? cout << "������� �������� ����� ��� ������!" << endl : cout << "���� ��� ������ ������ �������!" << endl;
	sort(myVector.begin(), myVector.end());
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << ' ';
	}
	if (binary_search(myVector.begin(), myVector.end(), 3))
	{
		cout << "\n ����� 3 �������� � �����!\n";
	}
	else 
	{
		cout << "\n ����� 3 �� �������� � �����! \n";
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