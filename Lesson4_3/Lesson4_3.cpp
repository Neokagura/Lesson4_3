
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int startDay;
    int day;
    cout << "Введите день месяца: ";
    cin >> day;
    cout << "Введите день, с которого началаcя месяц (1 - понедельник)";
    cin >> startDay;

    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
        cout << "Выходной день";
    }
    else if (day <= 0 || day > 31 || startDay > 7) {
        cout << "Некоректное значение";
    }
    else if (((day + 1) % 7) == 0 ) {
        cout << "Выходной день";
    }
    else {
        cout << "Рабочий день";
    }
}

