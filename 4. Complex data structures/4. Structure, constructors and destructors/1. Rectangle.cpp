//Прямоугольник
//Вы обнаружили две точки на плоскости. "Подозрительно!", - подумали вы. И не случайно, ведь эти две точки были противоположными углами прямоугольника, стороны которого параллельны осям координат. Вы решили его поймать. Процесс поимки прямоугольника включает в себя написание структуры rectangle, которая по данным координатам умеет находить длины сторон прямоугольника.
//
//Техническая часть
//Вам необходимо реализовать структуру rectangle, у которой есть два поля: w и h (длины сторон вдоль X и Y координат соответственно). Также эта структура должна иметь конструктор, который по четырем числам x1, y1, x2, y2 типа int заполнит эти два поля.
//
//Sample Input:
//1 1 4 6
//
//Sample Output:
//3 5

struct rectangle
{
    int w, h;

    rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
    {
        w = abs(x2 - x1);
        h = abs(y2 - y1);
    }
};