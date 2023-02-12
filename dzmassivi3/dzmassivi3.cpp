// dzmassivi3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    const int row = 5, col = 5;
    int arr[row][col];
    srand(time(NULL));
    cout << "Первоначальный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Выберете направление сдвига массива:\n1.Влево\n2.Вправо\n3.Вверх\n4.Вниз" << endl;
    int direction;
    cin >> direction;
    cout << "На сколько сдвинуть?" << endl;
    int qnt;
    cin >> qnt;

    cout << "Результат:" << endl;
    enum move { left = 1, right, up, down };
    switch (direction)
    {
    case left:
        for (int q = 0; q < qnt; q++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col - 1; j++)
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    case right:
        for (int q = 0; q < qnt; q++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = col - 1; j > 0; j--)
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j - 1];
                    arr[i][j - 1] = temp;
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    case up:
        for (int q = 0; q < qnt; q++)
        {
            for (int i = 0; i < row - 1; i++)
            {

                for (int j = 0; j < col; j++)
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i + 1][j];
                    arr[i + 1][j] = temp;
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    case down:
        for (int q = 0; q < qnt; q++)
        {
            for (int i = 0; i < row; i++)
            {

                for (int j = col - 1; j > 0; j--)
                {
                    int temp = arr[j][i];
                    arr[j][i] = arr[j - 1][i];
                    arr[j - 1][i] = temp;
                }
                cout << endl;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    default:
        cout << "Wrong!";
        break;
    }
}

