//Запросы к трехмерному массиву
//Вы со своим напарником проникли в банк массивов, и нашли там самый большой и самый красивый массив. Пока вы любовались его совершенством, ваш напарник по быстрому его упаковывал. Прибежав домой вы обнаружили, что упакован массив был довольно плохо - часть элементов потерялась. Теперь вам необходимо их восстановить. Поскольку вы очень долго им любовались, то запомнили массив во всех деталях. Поскольку восстановлением массива занимается ваш напарник, то он иногда спрашивает у вас, что хранилось раньше в массиве в ячейке с индексами i, j, k. Вам необходимо ответить на все его запросы. Массив нумеруется с единицы.
//
//Входные данные
//В первой строке записано три целых числа k, n, m - высота, ширина и длинна массива соответственно.
//
//Далее следует k блоков, в i-м блоке описан i-й слой трехмерной таблицы. Каждый слой представляет из себя двумерный массив с n строками и m столбцами, в каждой ячейке которого записано по одному целому числу. После каждого слоя следует пустая строка.
//
//После описания массива записано число Q - количество запросов напарника.
//
//В следующих Q строках записаны сами запросы. Каждый запрос описывается тремя целыми числами i, j, t. В ответ на этот запрос требуется вывести число, которое находится в i-м по высоте слое, в j-й строке и t-м столбце.
//
//Выходные данные
//
//Выведите Q чисел по одному в строке - ответы на запросы вашего напарника.
//
//Sample Input 1:
//2 3 4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//
//13 14 15 16
//17 18 19 20
//21 22 23 24
//
//5
//1 1 1
//1 1 2
//1 2 1
//2 3 4
//2 2 2
//
//Sample Output 1:
//1
//2
//5
//24
//18
//
//Sample Input 2:
//3 4 5
//6 4 1 7 7
//3 1 4 6 9
//9 4 6 10 7
//6 3 9 7 6
//
//3 1 5 8 3
//5 2 4 3 1
//2 3 6 4 10
//4 3 8 9 7
//
//1 7 10 1 2
//5 1 2 7 1
//6 4 8 5 9
//6 3 8 7 2
//
//10
//1 4 5
//2 1 3
//2 4 5
//2 3 2
//1 1 3
//3 1 4
//1 2 5
//3 3 2
//1 3 4
//3 2 5
//
//Sample Output 2:
//6
//5
//7
//3
//1
//1
//9
//4
//10
//1

#include <iostream>

using namespace std;

int main()
{
    unsigned lenght, rows, columns;
    cin >> lenght >> rows >> columns;
    int array[lenght][rows][columns];

    for (auto &matrix : array)
        for (auto &rows : matrix)
            for (int &cell : rows)
                cin >> cell;

    unsigned size;
    cin >> size;
    for (unsigned i = 0; i < size; ++i)
    {
        unsigned z, y, x;
        cin >> z >> y >> x;
        cout << array[z - 1][y - 1][x - 1] << endl;
    }
}