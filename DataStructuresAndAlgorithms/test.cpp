#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "shaker_sorting.h"
#include "binary_insertion_sorting.h"
#include "bubble_sorting.h"
#include "exchange_sorting.h"
#include "insert_sorting.h"
#include "optimized_bubble_sorting.h"
#include "selection_sorting.h"


TEST_CASE("Shaker Sort: Single Element Array", "[Shaker Sort]") {
    int arr[] = { 664 };
    shaker_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Shaker Sort: Already Sorted Array", "[Shaker Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    shaker_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Shaker Sort: Reversed Array", "[Shaker Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    shaker_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Shaker Sort: Array with Duplicates", "[Shaker Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    shaker_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Shaker Sort: Array with Negative Numbers", "[Shaker Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    shaker_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


TEST_CASE("Binary Insertion Sort: Single Element Array", "[Binary Insertion Sort]") {
    int arr[] = { 664 };
    binary_insertion_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Binary Insertion Sort: Already Sorted Array", "[Binary Insertion Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Binary Insertion Sort: Reversed Array", "[Binary Insertion Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Binary Insertion Sort: Array with Duplicates", "[Binary Insertion Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    binary_insertion_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Binary Insertion Sort: Array with Negative Numbers", "[Binary Insertion Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    binary_insertion_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Bubble Sort: Single Element Array", "[Bubble Sort]") {
    int arr[] = { 664 };
    bubble_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Bubble Sort: Already Sorted Array", "[Bubble Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    bubble_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Bubble Sort: Reversed Array", "[Bubble Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    bubble_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Bubble Sort: Array with Duplicates", "[Bubble Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    bubble_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Bubble Sort: Array with Negative Numbers", "[Bubble Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    bubble_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Exchange Sort: Single Element Array", "[Exchange Sort]") {
    int arr[] = { 664 };
    exchange_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Exchange Sort: Already Sorted Array", "[Exchange Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    exchange_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Exchange Sort: Reversed Array", "[Exchange Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    exchange_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Exchange Sort: Array with Duplicates", "[Exchange Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    exchange_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Exchange Sort: Array with Negative Numbers", "[Exchange Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    exchange_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Insert Sort: Single Element Array", "[Insert Sort]") {
    int arr[] = { 664 };
    insert_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Insert Sort: Already Sorted Array", "[Insert Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    insert_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Insert Sort: Reversed Array", "[Insert Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    insert_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Insert Sort: Array with Duplicates", "[Insert Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    insert_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Insert Sort: Array with Negative Numbers", "[Insert Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    insert_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Optimized Bubble Sort: Single Element Array", "[Optimized Bubble Sort]") {
    int arr[] = { 664 };
    optimized_bubble_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Optimized Bubble Sort: Already Sorted Array", "[Optimized Bubble Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    optimized_bubble_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Optimized Bubble Sort: Reversed Array", "[Optimized Bubble Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    optimized_bubble_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Optimized Bubble Sort: Array with Duplicates", "[Optimized Bubble Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    optimized_bubble_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Optimized Bubble Sort: Array with Negative Numbers", "[Optimized Bubble Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    optimized_bubble_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Selection Sort: Single Element Array", "[Selection Sort]") {
    int arr[] = { 664 };
    selection_sort(arr, 1);
    REQUIRE(arr[0] == 664);
}

TEST_CASE("Selection Sort: Already Sorted Array", "[Selection Sort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    selection_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Selection Sort: Reversed Array", "[Selection Sort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    selection_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Selection Sort: Array with Duplicates", "[Selection Sort]") {
    int arr[] = { 1, 1, 1, 1, };
    selection_sort(arr, 4);
    int expected[] = { 1, 1, 1, 1, };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Selection Sort: Array with Negative Numbers", "[Selection Sort]") {
    int arr[] = { -3, 4, 12, -5, 0 };
    selection_sort(arr, 5);
    int expected[] = { -5, -3, 0, 4, 12 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

