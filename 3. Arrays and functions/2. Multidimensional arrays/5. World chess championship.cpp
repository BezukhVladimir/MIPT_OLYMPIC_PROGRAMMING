//Чемпионат мира по шахматам
//Вы решили стать чемпионом мира по шахматам! К сожалению, на турниры пускают только игроков с высоким рейтингом, поэтому сначала надо получить разряд, хотя бы четвертый. Вы пришли на рейтинговый турнир, а там произошел невообразимый скандал! Организаторы не верят, что вы умеете играть в шахматы и попросили вас пройти квалификацию.
//
//Квалификация - очень простой процесс для вас. На доске стоит конь, требуется отметить все клетки, в которые он может походить. К счастью, у вас с собой был компьютер, поэтому вы сразу сели писать программу, которая решает эту задачу.
//
//Входные данные
//Во входных данных записана шахматная доска. Она представляет из себя таблицу 8 * 8, в каждой клетке которой записан символ точки (номер 46 в ASCII таблице), кроме одной - в ней записан символ K (номер 75 в ASCII таблице). В этой выделенной точке стоит конь.
//
//Выходные данные
//Выведите таблицу в аналогичном формате, заменив все символы точек на символ ! (номер 33 в ASCII таблице) для всех ячеек, в которые может походить конь.
//
//Примечание
//Конь всегда ходит на две клетки в одном направлении (горизонтальном или вертикальном) и на одну в перпендикулярном изначальному. Смотрите первый тест для более точного понимания ходов коня.
//
//Sample Input 1:
//........
//........
//........
//........
//....K...
//........
//........
//........
//
//Sample Output 1:
//........
//........
//...!.!..
//..!...!.
//....K...
//..!...!.
//...!.!..
//........
//
//Sample Input 2:
//........
//........
//........
//........
//........
//........
//........
//K.......
//
//Sample Output 2:
//........
//........
//........
//........
//........
//.!......
//..!.....
//K.......

#include <iostream>

using namespace std;

struct Point
{
    unsigned short x, y;

    Point(unsigned short x, unsigned short y): x(x), y(y) {}
};

int main()
{
    Point knight(0, 0);
    const unsigned short SIZE = 8;

    for (unsigned short i = 0; i < SIZE; ++i) {
        for (unsigned short j = 0; j < SIZE; ++j) {
            char temp;
            cin >> temp;

            if (temp == 'K') {
                knight.x = j;
                knight.y = i;
            }
        }
    }

    for (unsigned short i = 0; i < SIZE; ++i) {
        for (unsigned short j = 0; j < SIZE; ++j) {
            if (j == knight.x && i == knight.y)
                cout << 'K';
            else if (abs((knight.x - j) * (knight.y - i)) == 2)
                cout << '!';
            else
                cout << '.';
        }

        cout << endl;
    }
}