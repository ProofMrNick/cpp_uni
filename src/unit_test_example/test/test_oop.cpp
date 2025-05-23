#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "oop_practice.hpp"  // used to be .cpp


TEST(ArraysEqual, AnyElementsCount) {
    std::vector<int> actual = {1, 5, 3, 8, 2, 99, 0, 12};
    OopPractice::sort(actual);
    std::vector<int> expected = {1, 5, 3, 8, 2, 99, 0, 12};
    
    ASSERT_EQ(expected.size(), actual.size())
        << "arrays sizes do not match!";
        
    for (int i = 0; i < actual.size(); i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "arrays differ at index "
            << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}