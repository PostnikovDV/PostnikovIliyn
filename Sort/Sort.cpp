// C++ program for the implementation of Bubble sort
#include <iostream>
#include <vector>
#include "SortMethod.h"

int main() {
    // Размер массива
    int size = 10000;

    // Генерация случайных данных
    vector<int> data = generateRandomData(size);

    // Копирование данных для каждого алгоритма
    int* arr_bubble = new int[size];
    int* arr_insertion = new int[size];
    int* arr_quick = new int[size];
    copy(data.begin(), data.end(), arr_bubble);
    copy(data.begin(), data.end(), arr_insertion);
    copy(data.begin(), data.end(), arr_quick);

    // Измерение времени для каждой сортировки
    auto bubbleTime = measureTime(bubbleSort, arr_bubble, size);
    auto insertionTime = measureTime(insertionSort, arr_insertion, size);
    auto quickTime = measureTime(quickSort, arr_quick, 0, size - 1);

    // Вывод результатов
    cout << "time (sec):" << endl;
    cout << "  Bubble Sort:     " << bubbleTime.count() << endl;
    cout << "  Insertion Sort:  " << insertionTime.count() << endl;
    cout << "  Quick Sort:      " << quickTime.count() << endl;

    delete[] arr_bubble;
    delete[] arr_insertion;
    delete[] arr_quick;
}

