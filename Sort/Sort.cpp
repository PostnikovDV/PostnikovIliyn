// C++ program for the implementation of Bubble sort
#include <iostream>
#include <vector>
#include "SortMethod.h"

int main() {
    // ������ �������
    int size = 10000;

    // ��������� ��������� ������
    vector<int> data = generateRandomData(size);

    // ����������� ������ ��� ������� ���������
    int* arr_bubble = new int[size];
    int* arr_insertion = new int[size];
    int* arr_quick = new int[size];
    copy(data.begin(), data.end(), arr_bubble);
    copy(data.begin(), data.end(), arr_insertion);
    copy(data.begin(), data.end(), arr_quick);

    // ��������� ������� ��� ������ ����������
    auto bubbleTime = measureTime(bubbleSort, arr_bubble, size);
    auto insertionTime = measureTime(insertionSort, arr_insertion, size);
    auto quickTime = measureTime(quickSort, arr_quick, 0, size - 1);

    // ����� �����������
    cout << "time (sec):" << endl;
    cout << "  Bubble Sort:     " << bubbleTime.count() << endl;
    cout << "  Insertion Sort:  " << insertionTime.count() << endl;
    cout << "  Quick Sort:      " << quickTime.count() << endl;

    delete[] arr_bubble;
    delete[] arr_insertion;
    delete[] arr_quick;
}

