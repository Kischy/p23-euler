#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../Divisors.hpp"


using namespace testing;

 class TestDivisors : public Test
 {
     public:
         Divisors divisors;

 };

TEST_F(TestDivisors, DivisorsOf12)
{
    std::deque<int> divsOf12 = {1,2,3,4,6};

    ASSERT_THAT(divsOf12,Eq(divisors.getDivisors(12)));
}

TEST_F(TestDivisors, DivisorsOf28 )
{
    std::deque<int> divsOf28 = {1,2,4,7,14};

    ASSERT_THAT(divsOf28,Eq(divisors.getDivisors(28)));
}

TEST_F(TestDivisors, DivisorsOf129 )
{
    std::deque<int> divsOf129 = {1, 3, 43};

    ASSERT_THAT(divsOf129,Eq(divisors.getDivisors(129)));
}

TEST_F(TestDivisors, SumOfDivisorOf129 )
{
    ASSERT_THAT(47,Eq(divisors.getSumOfDivisors(129)));
}

TEST_F(TestDivisors, NumsSumsUntil8)
{

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

    std::deque<NumAndSumDivisors> act_numSums = divisors.getNumSumsUntil(8);

    ASSERT_THAT(exp_numSums.size(),Eq(act_numSums.size()));

    for(size_t i = 0; i < exp_numSums.size(); ++i)
    {
        EXPECT_THAT(exp_numSums.at(i).num, Eq(act_numSums.at(i).num));
        EXPECT_THAT(exp_numSums.at(i).sumOfDivisors, Eq(act_numSums.at(i).sumOfDivisors));
    }


}


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

