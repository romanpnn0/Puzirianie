#include <iostream>
using namespace std;

int main()
{
    // ��������� ������ �������,
    // ������� ���������� �������������
    int size;
    cin >> size;

    // ����������� �������� ������ ���
    // �������� ������� ������� size
    int *a = new int[size];
   
    // ��������� ������
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // ������� ���� ��������� ���������
    // ����� size ��������
    for (int i = 0; i < size; i++)
    {
        // ������ ��������������� � ����� ��
        // ������� i � "������ �������� ���������"
        for (int j = size - 1; j > i; j--)
        {
            // ���� �������� �������� �����������
            // � ������������ �������, �� ������
            // �� �������
            if (a[j] < a[j - 1])
            {
                swap (a[j], a[j - 1]);
            }
        }
    }

    // ������� ��������������� ������
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}