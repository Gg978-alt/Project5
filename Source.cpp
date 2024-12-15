#include <iostream>
#include <cmath>
using namespace std;

// ������� ��� �������� 17 � ������� 1: RootCount
int RootCount(double A, double B, double C) {
    if (A == 0) {
        cout << "�������: A �� ������� ���������� 0." << endl;
        return -1;
    }
    double D = B * B - 4 * A * C;
    if (D > 0) return 2;
    if (D == 0) return 1;
    return 0;
}

// ������� ��� �������� 21 � ������� 2: IsAscending
bool IsAscending(int N) {
    if (N < 100 || N > 999) {
        cout << "�������: N ������� ���� ���������� ������." << endl;
        return false;
    }
    int a = N / 100;          // ����
    int b = (N / 10) % 10;    // �������
    int c = N % 10;           // �������
    return (a < b && b < c);
}

// ������� ��� �������� 19 � ������� 3: FullMinutes
int FullMinutes(int N) {
    if (N < 0) {
        cout << "�������: N ������� ���� ���䒺����." << endl;
        return -1;
    }
    return N / 60; // ʳ������ ������ ������
}

int main() {
    int choice;

    do {
        // ���� ������
        cout << "������ ��������:" << endl;
        cout << "1. RootCount (�������� 17 � ������� 1)" << endl;
        cout << "2. IsAscending (�������� 21 � ������� 2)" << endl;
        cout << "3. FullMinutes (�������� 19 � ������� 3)" << endl;
        cout << "0. �����" << endl;
        cout << "��� ����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // �������� 17 � ������� 1: RootCount
            double A, B, C;
            cout << "������ ����������� A, B, C: ";
            cin >> A >> B >> C;
            int roots = RootCount(A, B, C);
            if (roots != -1)
                cout << "ʳ������ ������: " << roots << endl;
            break;
        }
        case 2: {
            // �������� 21 � ������� 2: IsAscending
            int N;
            cout << "������ ��������� �����: ";
            cin >> N;
            if (IsAscending(N))
                cout << "����� ��������� ��������� �����������." << endl;
            else
                cout << "����� �� ��������� ��������� �����������." << endl;
            break;
        }
        case 3: {
            // �������� 19 � ������� 3: FullMinutes
            int N;
            cout << "������ ������� ������ � ������� ����: ";
            cin >> N;
            int minutes = FullMinutes(N);
            if (minutes != -1)
                cout << "������ ������: " << minutes << endl;
            break;
        }
        case 0:
            cout << "����� � ��������. �� ���������!" << endl;
            break;
        default:
            cout << "������� ����. ��������� �� ���." << endl;
        }
    } while (choice != 0);

    return 0;
}

