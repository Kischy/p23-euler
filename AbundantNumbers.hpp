#ifndef ABUNDANTNUMBERS_H
#define ABUNDANTNUMBERS_H

#include "Divisors.hpp"
#include <deque>

class AbundantNumbers
{
private:
    std::deque<int> abundantNums;

public:
    std::deque<int> getAbundandNums(const int maxNum )
    {
        Divisors divs;
        std::deque<NumAndSumDivisors> sumDivs = divs.getNumSumsUntil(maxNum);

        for(const auto sumDiv : sumDivs)
        {
            if(sumDiv.sumOfDivisors > sumDiv.num)
            {
                abundantNums.push_back(sumDiv.num);
            }
        }

        return abundantNums;
    }

};

#endif // ABUNDANTNUMBERS_H