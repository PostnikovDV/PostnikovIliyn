#include "pch.h"
#include <gtest/gtest.h>
#include <chrono>
#include <vector>
#include <algorithm>

#include "C:\PostnikovIliyn\Sort\SortMethod.h"

using namespace std;

class SortingTimeTest : public ::testing::Test {
protected:
    void SetUp() override {
        data = generateRandomData(10000);
    }

    vector<int> data;
};

TEST_F(SortingTimeTest, BubbleSortTime) {
    auto bubbleSortTime = measureTime(bubbleSort, data.data(), data.size());
    EXPECT_LT(bubbleSortTime.count(), 2.0) << "Bubble Sort took too long to complete.";
}

TEST_F(SortingTimeTest, InsertionSortTime) {
    auto insertionSortTime = measureTime(insertionSort, data.data(), data.size());
    EXPECT_LT(insertionSortTime.count(), 2.0) << "Insertion Sort took too long to complete.";
}

TEST_F(SortingTimeTest, QuickSortTime) {
    auto quickSortTime = measureTime(quickSort, data.data(), 0, data.size() - 1);
    EXPECT_LT(quickSortTime.count(), 2.0) << "Quick Sort took too long to complete.";
}

TEST_F(SortingTimeTest, SelectionSortTime) {
    auto selectionSortTime = measureTime(selectionSort, data.data(), data.size());
    EXPECT_LT(selectionSortTime.count(), 2.0) << "Selection Sort took too long to complete.";
}

TEST_F(SortingTimeTest, MergeSortTime) {
    auto mergeSortTime = measureTime(mergeSort, data.data(), 0, data.size() - 1);
    EXPECT_LT(mergeSortTime.count(), 2.0) << "Merge Sort took too long to complete.";
}

TEST_F(SortingTimeTest, ShellSortTime) {
    auto shellSortTime = measureTime(shellSort, data.data(), data.size());
    EXPECT_LT(shellSortTime.count(), 2.0) << "Shell Sort took too long to complete.";
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
