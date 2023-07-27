#include <iostream>
#include <ctime>

const int SIZE_ARR = 10;

void count_num(int* arr, int start_point)
{
    int left = 0;
    int right = SIZE_ARR - 1;
    int middle = 0;
    int count = 0;
    int schet = 0;

    while (left < right)
    {
        middle = (left + right) / 2;
        if ((arr[middle] <= start_point) && (arr[middle + 1] > start_point))
        {
            count = (SIZE_ARR - 1) - middle;
            break;
        }
        else if (arr[middle] < start_point)
        {
            if (middle != SIZE_ARR - 1)
            {
                left = middle + 1;
                if ((left >= right) && (right < SIZE_ARR - 1))
                {
                    right++;
                }
            }
            else
            {
                left = middle;
            }
        }
        else if (arr[middle] > start_point)
        {
            if (middle == 0)
            {
                count = SIZE_ARR;
                break;
            }
            else if (middle != 1)
            {
                right = middle - 1;
            }
            else
            {
                right = middle;
            }
        }
        else if ((arr[middle] == start_point) && (arr[middle + 1] == start_point))
        {
            left = middle + 1;
            if ((left >= right) && (right < SIZE_ARR - 1))
            {
                right++;
            }
        }
        schet++;
    }
    std::cout << "Количество элементов в массиве больших, чем " << start_point << ": " << count << std::endl;
}

int* random_arr(int size_arr)
{
    int* new_arr = new int[size_arr] {};
    int last = 0;
    int now = 0;
    int next = 0;
    int schet = 0;

    for (int i = 0; i < size_arr; i++)
    {
        new_arr[i] = rand() % 100;
    }
    std::cout << std::endl;

    while (schet <= size_arr)
    {
        now = new_arr[schet];
        if (schet < size_arr - 1)
        {
            next = new_arr[schet + 1];
        }
        if (now > next)
        {
            last = now;
            now = next;
            new_arr[schet] = now;
            new_arr[schet + 1] = last;
            schet = 0;
        }
        else
        {
            schet++;
        }
    }

    return new_arr;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int* arr = random_arr(SIZE_ARR);
    int start_point = 0;

    std::cout << "Введите точку отсчёта: ";

    std::cin >> start_point;

    for (int i = 0; i < SIZE_ARR; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    count_num(arr, start_point);

}