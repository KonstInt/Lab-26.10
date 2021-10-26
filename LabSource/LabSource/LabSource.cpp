// LabSource.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <chrono>
#include <ctime>    

using namespace std;
bool IsLeapYear(int what_year) {
    bool bLeapYear = false;
    if ((what_year % 4) == 0) {
        if ((what_year % 100) == 0) {
            bLeapYear = ((what_year % 400) == 0);
        }
        else {
            bLeapYear = true;
        }
        // leap year
    }
    return bLeapYear;
}
int DaysInYear(int year) {
 
    if (IsLeapYear(year))
        return 366;
    else
        return 365;

}

int DaysInRangeYear(int year1, int year2) {

    int sum = 0;
    for (int i = year1; i < year2; i++)
        sum += DaysInYear(i);
    return sum;

}


int main() {


}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
