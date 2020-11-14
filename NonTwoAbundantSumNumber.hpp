#ifndef NONTWOABUNDANTSUMNUMBERS_H
#define NONTWOABUNDANTSUMNUMBERS_H

#include <deque>
#include "AbundantNumbers.hpp"

class NonTwoAbundantSumNumbers
{
private:
    std::deque<int> nonTwoAbundantSumNumbers;

    void calcNonTwoAbundantSumNumbers(const int maxNum)
    {
        AbundantNumbers abundantNumbers;
        std::deque<int> abNums = abundantNumbers.getAbundandNums(maxNum);

        for(int i = 1; i <= maxNum; ++i)
        {
            if(iSTheSumOfTwoAbundandtNumbers(i,abNums) == false)
            {
                nonTwoAbundantSumNumbers.push_back(i);
            }
        }

    }

public:
    bool iSTheSumOfTwoAbundandtNumbers(const int num, const std::deque<int>& abNums)
    {
        for (const int abNum : abNums)
        {
            if (abNum > num)
            {
                break;
            }

            for (const int innerAbNum : abNums)
            {
                if (innerAbNum > num)
                {
                    break;
                }

                if (abNum + innerAbNum == num)
                {
                    return true;
                }
            }
        }

        return false;
    }

    std::deque<int> getNonTwoAbundantSumNumbers(const int maxNum)
    {
        calcNonTwoAbundantSumNumbers(maxNum);

        return nonTwoAbundantSumNumbers;
    }
};

#endif // NONTWOABUNDANTSUMNUMBERS_H