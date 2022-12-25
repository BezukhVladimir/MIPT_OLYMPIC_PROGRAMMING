//Время
//В этой задаче вам необходимо реализовать структуру my_time, имеющую 4 поля: дни (day), часы (hour), минуты (minute) и секунды (second). Также в ней должен быть метод set, принимающий одно целое число t - количество секунд, и переводящий его в привычные дни, часы, минуты и секунды, заполняя соответствующие поля структуры.
//
//Sample Input 1:
//12345
//
//Sample Output 1:
//0 3 25 45
//
//Sample Input 2:
//-86401
//
//Sample Output 2:
//-2 23 59 59

struct my_time
{
    int day, hour, minute, second;

    void set(int t)
    {
        day = (t < 0 ? t - 86399 : t) / 86400;
        t = (t % 86400 + 864000) % 86400;
        hour = t / 3600 % 24;
        minute = t / 60 % 60;
        second = t % 60;
    }
};