#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../NonTwoAbundantSumNumber.hpp"
#include "../AbundantNumbers.hpp"

using namespace testing;

TEST(TestNonTwoAbundandSumNumbers, TestiSTheSumOfTwoAbundandtNumbers)
{
    NonTwoAbundantSumNumbers ntasn;

    AbundantNumbers abundantNumbers;
    std::deque<int> abNums = abundantNumbers.getAbundandNums(24);

    EXPECT_THAT(ntasn.iSTheSumOfTwoAbundandtNumbers(24,abNums), Eq(true));
    EXPECT_THAT(ntasn.iSTheSumOfTwoAbundandtNumbers(1,abNums), Eq(false));
    EXPECT_THAT(ntasn.iSTheSumOfTwoAbundandtNumbers(12,abNums), Eq(false));
    EXPECT_THAT(ntasn.iSTheSumOfTwoAbundandtNumbers(23,abNums), Eq(false));
}


TEST(TestNonTwoAbundandSumNumbers, ReturnsCorrectTwoAbundantSumNumbers)
{
    NonTwoAbundantSumNumbers ntasn;

    std::deque<int> ex_nums;
    for(int i = 1; i <= 23; i++)
    {
        ex_nums.push_back(i);
    }

    ASSERT_THAT(ntasn.getNonTwoAbundantSumNumbers(24), Eq(ex_nums));
}

