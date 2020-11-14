#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../AbundantNumbers.hpp"

using namespace testing;

TEST(TestGetAbundandSums, TestFirst28AbundantNumbers)
{
    AbundantNumbers abundantNumbers;
    std::deque<int> abNums = {12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66, 70, 72, 78, 80, 84, 88, 90, 96, 100, 102, 104, 108, 112, 114, 120};

    ASSERT_THAT(abundantNumbers.getAbundandNums(120), Eq(abNums));
}