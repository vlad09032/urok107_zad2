/*
�������� ����������� �������, ������� ��������� ����� ����� � �������� ������� ������ �
���������� ����� ���� ����� ����� �������� (��������, 482 = 4 + 8 + 2 = 14). ������������� ����
���������, ��������� ����� 83569 (����������� ������ ���� 31).
*/
#include<iostream>

int recurs(int num)
{
	if (num < 10)
		return num;
	else
	{
		int sum{ 0 };
		return sum =(num%10) + recurs(num / 10);
	}
}

int main()
{
	int num{0};
	std::cout << "Enter to number: ";
	std::cin >> num;
	recurs(num);

}