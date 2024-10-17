#pragma once
#include <iostream>
#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;

void bubbleSort(int list[], int listLength)
{
    while (listLength--)
    {
        bool swapped = false;

        for (int i = 0; i < listLength; i++)
        {
            if (list[i] > list[i + 1])
            {
                swap(list[i], list[i + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void insertionSort(int list[], int listLength)
{
    for (int i = 1; i < listLength; i++)
    {
        int j = i - 1;
        while (j >= 0 && list[j] > list[j + 1])
        {
            swap(list[j], list[j + 1]);
            j--;
        }
    }
}

int partition(int list[], int start, int pivot)
{
    int i = start;
    while (i < pivot)
    {
        if (list[i] > list[pivot] && i == pivot - 1)
        {
            swap(list[i], list[pivot]);
            pivot--;
        }

        else if (list[i] > list[pivot])
        {
            swap(list[pivot - 1], list[pivot]);
            swap(list[i], list[pivot]);
            pivot--;
        }

        else i++;
    }
    return pivot;
}

void quickSort(int list[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(list, start, end);

        quickSort(list, start, pivot - 1);
        quickSort(list, pivot + 1, end);
    }
}

template <typename T, typename... Args>
chrono::duration<double> measureTime(T func, Args... args) {
    auto start = chrono::high_resolution_clock::now();
    func(args...);
    auto end = chrono::high_resolution_clock::now();
    return end - start;
}

// --- Генерация случайных данных ---

vector<int> generateRandomData(int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 10000);
    vector<int> data(size);
    generate(data.begin(), data.end(), [&distrib, &gen]() { return distrib(gen); });
    return data;
}

int findSmallestPosition(int list[], int startPosition, int listLength)
{
    int smallestPosition = startPosition;

    for (int i = startPosition; i < listLength; i++)
    {
        if (list[i] < list[smallestPosition])
            smallestPosition = i;
    }
    return smallestPosition;
}

void selectionSort(int list[], int listLength)
{
    for (int i = 0; i < listLength; i++)
    {
        int smallestPosition = findSmallestPosition(list, i, listLength);
        swap(list[i], list[smallestPosition]);
    }
    return;
}

void merge(int list[], int start, int end, int mid);

void mergeSort(int list[], int start, int end)
{
    int mid;
    if (start < end) {

        mid = (start + end) / 2;
        mergeSort(list, start, mid);
        mergeSort(list, mid + 1, end);
        merge(list, start, end, mid);
    }
}

void merge(int list[], int start, int end, int mid)
{
    int mergedList[8];
    int i, j, k;
    i = start;
    k = start;
    j = mid + 1;

    while (i <= mid && j <= end) {
        if (list[i] < list[j]) {
            mergedList[k] = list[i];
            k++;
            i++;
        }
        else {
            mergedList[k] = list[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        mergedList[k] = list[i];
        k++;
        i++;
    }

    while (j <= end) {
        mergedList[k] = list[j];
        k++;
        j++;
    }

    for (i = start; i < k; i++) {
        list[i] = mergedList[i];
    }
}

void shellSort(int list[], int listLength)
{
    for (int step = listLength / 2; step > 0; step /= 2)
    {
        for (int i = step; i < listLength; i += 1)
        {
            int j = i;
            while (j >= step && list[j - step] > list[i])
            {
                swap(list[j], list[j - step]);
                j -= step;
            }
        }
    }
}

