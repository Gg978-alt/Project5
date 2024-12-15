#include <iostream>
#include <cmath>
using namespace std;

// Функція для завдання 17 з Таблиці 1: RootCount
int RootCount(double A, double B, double C) {
    if (A == 0) {
        cout << "Помилка: A не повинно дорівнювати 0." << endl;
        return -1;
    }
    double D = B * B - 4 * A * C;
    if (D > 0) return 2;
    if (D == 0) return 1;
    return 0;
}

// Функція для завдання 21 з Таблиці 2: IsAscending
bool IsAscending(int N) {
    if (N < 100 || N > 999) {
        cout << "Помилка: N повинно бути тризначним числом." << endl;
        return false;
    }
    int a = N / 100;          // Сотні
    int b = (N / 10) % 10;    // Десятки
    int c = N % 10;           // Одиниці
    return (a < b && b < c);
}

// Функція для завдання 19 з Таблиці 3: FullMinutes
int FullMinutes(int N) {
    if (N < 0) {
        cout << "Помилка: N повинно бути невід’ємним." << endl;
        return -1;
    }
    return N / 60; // Кількість повних хвилин
}

int main() {
    int choice;

    do {
        // Меню вибору
        cout << "Оберіть завдання:" << endl;
        cout << "1. RootCount (Завдання 17 з Таблиці 1)" << endl;
        cout << "2. IsAscending (Завдання 21 з Таблиці 2)" << endl;
        cout << "3. FullMinutes (Завдання 19 з Таблиці 3)" << endl;
        cout << "0. Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Завдання 17 з Таблиці 1: RootCount
            double A, B, C;
            cout << "Введіть коефіцієнти A, B, C: ";
            cin >> A >> B >> C;
            int roots = RootCount(A, B, C);
            if (roots != -1)
                cout << "Кількість коренів: " << roots << endl;
            break;
        }
        case 2: {
            // Завдання 21 з Таблиці 2: IsAscending
            int N;
            cout << "Введіть тризначне число: ";
            cin >> N;
            if (IsAscending(N))
                cout << "Цифри утворюють зростаючу послідовність." << endl;
            else
                cout << "Цифри не утворюють зростаючу послідовність." << endl;
            break;
        }
        case 3: {
            // Завдання 19 з Таблиці 3: FullMinutes
            int N;
            cout << "Введіть кількість секунд з початку доби: ";
            cin >> N;
            int minutes = FullMinutes(N);
            if (minutes != -1)
                cout << "Повних хвилин: " << minutes << endl;
            break;
        }
        case 0:
            cout << "Вихід з програми. До побачення!" << endl;
            break;
        default:
            cout << "Невірний вибір. Спробуйте ще раз." << endl;
        }
    } while (choice != 0);

    return 0;
}

