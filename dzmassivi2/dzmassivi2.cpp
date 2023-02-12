// dzmassivi2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int size, a;
    cout << " Введите размер массива" << endl;
    cin >> size;
    cout << "Введите первый элемент" << endl;

    cin >> a;
    int** arr = new int* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = a;
            a = a+1  ;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
