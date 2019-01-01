#include <iostream> //���������� ��� ������ � �������� �����/������
using namespace std; //�������� � ������������� ��� std
int main() {
	//�������������� ������ ��� ������ ����������
	const int n = 10; //���������� ����� ������ ������� (� ����� ������ 10)
	int mas[n][n]; //������ ������ ����� ����� n �� n (10 �� 10)
	int locMin = 0; //����������, �������, ���������� ���-�� ��������� ���������
	int sum = 0; //����������, ������� ����� ��������� ����� ����� ������� ���������, ������������� ���� ������� ���������

	//����� ����� � ����� ������� ������ �� �������
	cout << "Matrix :" << endl; //cout ��� ����� ������ (�� ��� ��������� �� ����� �������), �������� "Matrix :" � ����� � ������� �������������� ���������� <<
	for (int i = 0; i < n; i++) {  //���� ���� ���������� ������ � ��������� �������
		for (int j = 0; j < n; j++) { //���� ���� ���������� ������� (��� ��� ��������� � ������)
			mas[i][j] = rand() % 30 - 10; //������������ ���������� �������� ��������� �������
			cout << mas[i][j] << "  "; //����� ����� ��������
		}
		cout << endl; //������� ������ ����� ������� ���������  ������
	}

	//����� ��������� ���������
	cout << "Minimum :" << endl; //����� �� ����� "Minimum :" � ������� ������
	for (int i = 0; i < n; i++) { //���� ���� ���������� ������ � ��������� �������
		for (int j = 0; j < n; j++) { //���� ���� ���������� ������� (��� ��� ��������� � ������)
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i][j + 1]) && (mas[i][j] < mas[i + 1][j]) && (mas[i][j] < mas[i - 1][j])) { //���� �������� ��������� ����� ������ ������ ����� ������ �������� ���������� ���������, �� (��. ����)
				cout << "String " << i + 1 << " column " << j + 1 << " min = " << mas[i][j] << endl; //���� �������� ��� ��������� �������, � �� ��������� ��� �� �����, ����� (��. ����)
				locMin++; //����������, ������� ������ ���������� ���. ��������� �����������
			}
		}
	}
	cout << "Found " << locMin << " minimum"; //����� ���������� ���������

	//����� �������  ����� ����� ������� ���������, ������������� ���� ������� ���������
	for (int i = 0; i < n; i++) { //���� ���� ���������� ������ � ��������� �������
		for (int j = i + 1; j < n; j++) { //���� ���� ���������� ������� (��� ��� ��������� � ������)
			sum += abs(mas[i][j]); //������ �������� �� ������ ������������ � ����� �����  //�� ������ �������� ������ ��� ������ �-��� abs() 
		}
	}
	cout << endl << "Sum of the elements above the main diagonal = " << sum << endl; //������� ����� ����� ������� ���������, ������������� ���� ������� ���������

	system("pause"); // ����� ��������� � ����� + �������� ������� ����� ������
	return 0; //����������� main �-��� �������� 0, �.� ����� ��������� 
}