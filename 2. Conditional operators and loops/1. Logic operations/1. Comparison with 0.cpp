//Сравнение с 0
//В этой задаче необходимо опять сравнить данное число с 0.
//
//Входные данные
//Входные данные содержат единственное целое число.
//
//Выходные данные
//Выведите 1, если значение переменной равно 0, и 0 иначе.
//
//Примечание
//В этой задаче запрещено пользоваться условным оператором.
//
//Sample Input 1:
//0
//
//Sample Output 1:
//1
//
//Sample Input 2:
//-10
//
//Sample Output 2:
//0

#include <iostream>

using namespace std;

int main()
{
    long int a;
    cin >> a;
    cout << !a;
}