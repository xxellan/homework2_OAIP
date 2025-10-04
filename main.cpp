#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

// 1 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int coords[6];
    int s = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << "Введите координату: ";
        cin >> coords[i];
    }

    int x1 = coords[0], y1 = coords[1];
    int x2 = coords[2], y2 = coords[3];
    int x3 = coords[4], y3 = coords[5];

    s = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/2;

    cout << s << endl;

    return 0;
}


// 2 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    int curV = 1;
    cout << "Введите количество вершин: " << endl;
    cin >> n;
    int arr[n * 2];

    cout << "Введите " << n * 2 << " целых чисел" << endl;

    for (int i = 0; i < n * 2; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;
    }

    double p = 0;
    int x = 0, y = 0;
    double r = 0;

    for (int i = 0; i < n * 2 - 2; i = i + 2)
    {
        x = pow(arr[i + 2] - arr[i], 2);
        y = pow(arr[i + 3] - arr[i + 1], 2);
        r = sqrt(x + y);
        p = p + r;
    }

    x = pow(arr[0] - arr[n * 2 - 2], 2);
    y = pow(arr[1] - arr[n * 2 - 1], 2);
    r = sqrt(x + y);
    p = p + r;

    cout << p << endl;

    return 0;
}


// 3 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[6];
    int curV = 1;

    cout << "Введите 6 целых чисел" << endl;

    for (int i = 0; i < 6; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;
    }

    double x1 = arr[0], x2 = arr[2], x3 = arr[4];
    double y1 = arr[1], y2 = arr[3], y3 = arr[5];

    double Cx = (x1 + x2 + x3) / 3;
    double Cy = (y1 + y2 + y3) / 3;

    cout << "Координаты центра масс треугольника: ( " << Cx << ", " << Cy << " )";

    return 0;
}


// 4 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[8];
    int curV = 1;

    cout << "Введите 8 целых чисел" << endl;

    for (int i = 0; i < 8; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;
    }

    double x1 = 0, y1 = 0;

    for (int i = 2; i < 8; i = i + 2)
    {
        if (arr[i] != arr[0] & arr[i + 1] != arr[1])
        {
            x1 = arr[i];
            y1 = arr[i + 1];
        }
    }

    double x = pow(x1 - arr[0], 2);
    double y = pow(y1 - arr[1], 2);
    double d = sqrt(x + y);

    cout << d;

    return 0;
}


// 5 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[6];
    int curV = 1;

    cout << "Введите 6 целых чисел" << endl;

    for (int i = 0; i < 6; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;
    }

    double x1 = arr[0], x2 = arr[2], x3 = arr[4];
    double y1 = arr[1], y2 = arr[3], y3 = arr[5];

    double product = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if (product == 0)
    {
        cout << "Точки лежат на одной прямой" << endl;
    }
    else
    {
        cout << "Точки не лежат на одной прямой" << endl;
    }

    return 0;
}


// 6 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[8];
    int curV = 1;

    cout << "Введите 8 целых чисел" << endl;

    for (int i = 0; i < 8; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;
    }

    bool A = (arr[0] < arr[6] & arr[2] > arr[4] & arr[1] > arr[5] & arr[3] < arr[7]);
    bool B = (arr[0] < arr[6] & arr[2] > arr[4] & arr[1] < arr[5] & arr[3] > arr[7]);

    if (A || B)
    {
        cout << "Отрезки пересекаются";
    }
    else
    {
        cout << "Отрезки не пересекаются";
    }

    return 0;
}


// 7 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    cout << "Введите количество вершин: ";
    cin >> n;

    int arr[n];
    int curV = 1;

    int maxX = 0, minX = 0, maxY = 0, minY = 0;

    cout << "Введите " << n * 2 << " целых чисел" << endl;

    for (int i = 0; i < n * 2; i = i + 2)
    {
        cout << "введите координату X вершины " << curV << ": ";
        cin >> arr[i];
        cout << "введите координату Y вершины " << curV << ": ";
        cin >> arr[i + 1];
        cout << endl;
        curV++;

        if (arr[i] > maxX)
        {
            maxX = arr[i];
        }
        else if (arr[i] < minX)
        {
            minX = arr[i];
        }

        if (arr[i + 1] > maxY)
        {
            maxY = arr[i + 1];
        }
        else if (arr[i + 1] < minY)
        {
            minY = arr[i + 1];
        }
    }

    int x = 0, y = 0;
    cin >> x >> y;

    if (x > minX & x < maxX & y > minY & y < maxY)
    {
        cout << "Точка лежит внутри";
    }
    else
    {
        cout << "Точка лежит снаружи";
    }

    return 0;
}


// 8 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int D1x = 0, D1y = 0;
    int D2x = 0, D2y = 0;

    cout << "Введите 4 целых числа: ";
    cin >> D1x >> D1y >> D2x >> D2y;

    int x = pow(D2x - D1x, 2), y = pow(D2y - D1y, 2);

    float r = sqrt(x + y);

    cout << r;

    return 0;
}


// 9 задача
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr;
    int k = 0;
    cout << "Введите кол-во вершин для 1 многоугольника(больше 2): ";
    cin >> k;
    if (k > 2) {
        arr = new int* [k];
        for (int i = 0; i < k; i++) {
            arr[i] = new int[2];
        }
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (j == 0) {
                    cout << "Введите x для " << i + 1 << " вершины: ";
                    cin >> arr[i][j];
                }
                if (j == 1) {
                    cout << "Введите y для " << i + 1 << " вершины: ";
                    cin >> arr[i][j];
                }
            }
        }
    
    int arr2;
    int k2 = 0;
    cout << "Введите кол-во вершин для 2 многоугольника(больше 2): ";
    cin >> k2;
    if (k2 > 2) {
        arr2 = new int* [k2];
        for (int i = 0; i < k2; i++) {
            arr2[i] = new int[2];
        }
        for (int i = 0; i < k2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (j == 0) {
                    cout << "Введите x для " << i + 1 << " вершины: ";
                    cin >> arr2[i][j];
                }
                if (j == 1) {
                    cout << "Введите y для " << i + 1 << " вершины: ";
                    cin >> arr2[i][j];
                }
            }
        }

        for (int i = 0; i < k - 1; i++) {
            for (int j = 0; j < k2 - 1; i++) {
                int s1 = Orientetion(arr[i][0], arr[i + 1][0], arr2[j][0], arr[i][1], arr[i + 1][1], arr2[j][1]);
                int s2 = Orientetion(arr[i][0], arr[i + 1][0], arr2[j + 1][0], arr[i][1], arr[i + 1][1], arr2[j + 1][1]);
                if (s1 != s2 and s1 != 0 and s2 != 0) {
                    cout << "Многоугольники пересекаются" << endl;
                    exit(EXIT_FAILURE);
                }
                else if ((s1 != s2 and s1 == 0) or (s1 != s2 and s2 == 0)) {
                    cout << "Многоугольники пересекаются" << endl;
                    exit(EXIT_FAILURE);
                }
            }
        }
    }
    }
    cout << "Многоугольники не пересекаются" << endl;
    return 0;
}