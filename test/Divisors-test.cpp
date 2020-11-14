#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../Divisors.hpp"


using namespace testing;

TEST(TestFindingDivisoris, DivisorsOf12)
{
    Divisors divisors;
    std::deque<int> divsOf12 = {1,2,3,4,6};

    ASSERT_THAT(divsOf12,Eq(divisors.getDivisors(12)));
}

TEST(TestFindingDivisoris, DivisorsOf28 )
{
    Divisors divisors;
    std::deque<int> divsOf28 = {1,2,4,7,14};

    ASSERT_THAT(divsOf28,Eq(divisors.getDivisors(28)));
}

TEST(TestFindingDivisoris, DivisorsOf129 )
{
    Divisors divisors;
    std::deque<int> divsOf129 = {1, 3, 43};

    ASSERT_THAT(divsOf129,Eq(divisors.getDivisors(129)));
}

TEST(TestSumOfDivisors, SumOfDivisorOf129 )
{
    Divisors divisors;
    ASSERT_THAT(47,Eq(divisors.getSumOfDivisors(129)));
}

TEST(TestGetNumSumsUntil, NumsSumsUntil8)
{
    Divisors divisors;

    std::deque<NumAndSumDivisors> exp_numSums;
    NumAndSumDivisors numSum;
    numSum.num = 1;
    numSum.sumOfDivisors = 1;
    exp_numSums.push_back(numSum);

    numSum.num = 2;
    numSum.sumOfDivisors = 1;
    exp_numSums.push_back(numSum);

    numSum.num = 3;
    numSum.sumOfDivisors = 1;
    exp_numSums.push_back(numSum);

    numSum.num = 4;
    numSum.sumOfDivisors = 3;
    exp_numSums.push_back(numSum);

    numSum.num = 5;
    numSum.sumOfDivisors = 1;
    exp_numSums.push_back(numSum);

    numSum.num = 6;
    numSum.sumOfDivisors = 6;
    exp_numSums.push_back(numSum);

    numSum.num = 7;
    numSum.sumOfDivisors = 1;
    exp_numSums.push_back(numSum);

    numSum.num = 8;
    numSum.sumOfDivisors = 7;
    exp_numSums.push_back(numSum);

    ASSERT_THAT(exp_numSums,Eq(divisors.getNumSumsUntil(8)));

}


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

