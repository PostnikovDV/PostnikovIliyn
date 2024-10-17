#include "pch.h"
#include "C:\PostnikovIliyn\Sort\SortMethod.h"

/*
* Плюсы тестирования в программировании :
* Повышение качества кода — Выявление ошибок заранее.
* Уверенность в работе системы — Проверка на всех уровнях.
* Легче вносить изменения — Меньше риска поломок.
* Документация кода — Тесты описывают функциональность.
* Автоматизация проверок — Снижение ручного труда.
* Минусы тестирования в программировании :
* Требует времени — Затраты на написание тестов.
* Поддержка тестов — Необходимо обновлять тесты.
* Сложность в интеграции — Особенно в старые проекты.
* Не покрывает все случаи — Тесты могут пропускать ошибки.
* Затраты ресурсов — Тесты могут замедлять сборку.
*/

TEST(SortingTests, BubbleSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    bubbleSort(arr1, 5);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    bubbleSort(arr2, 5);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    bubbleSort(arr3, 8);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

TEST(SortingTests, InsertionSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    insertionSort(arr1, 5);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    insertionSort(arr2, 5);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    insertionSort(arr3, 8);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

TEST(SortingTests, selectionSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    selectionSort(arr1, 5);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    selectionSort(arr2, 5);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    selectionSort(arr3, 8);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

TEST(SortingTests, mergeSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    mergeSort(arr1, 0, 4);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    mergeSort(arr2, 0, 4);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    mergeSort(arr3, 0, 7);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

TEST(SortingTests, QuickSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    quickSort(arr1, 0, 4);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    quickSort(arr2, 0, 4);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    quickSort(arr3, 0, 7);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

TEST(SortingTests, shellSortTest) {
    int arr1[] = { 5, 1, 4, 2, 8 };
    int expected1[] = { 1, 2, 4, 5, 8 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int expected2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int expected3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    shellSort(arr1, 5);
    ASSERT_EQ(0, memcmp(arr1, expected1, sizeof(expected1)));

    shellSort(arr2, 5);
    ASSERT_EQ(0, memcmp(arr2, expected2, sizeof(expected2)));

    shellSort(arr3, 8);
    ASSERT_EQ(0, memcmp(arr3, expected3, sizeof(expected3)));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


