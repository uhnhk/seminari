#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "binary_insertion_sorting.h"

TEST_CASE("InsertionBinarySort: Single Element Array", "[InsertionBinarySort]") {
    int arr[] = { 5 };
    binary_insertion_sort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("InsertionBinarySort: Already Sorted Array", "[InsertionBinarySort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Reversed Array", "[InsertionBinarySort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Array with Duplicates", "[InsertionBinarySort]") {
    int arr[] = { 7, 7, 7, 7 };
    binary_insertion_sort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Array with Negative Numbers", "[InsertionBinarySort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    binary_insertion_sort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

