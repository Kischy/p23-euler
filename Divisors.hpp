#ifndef DIVISORS_H
#define DIVISORS_H

#include <deque>
#include <cmath>
#include <algorithm>

struct NumAndSumDivisors
{
    int num;
    int sumOfDivisors;


};


class Divisors
{
private:
    std::deque<NumAndSumDivisors> numSums;

    void calcNumSums(const int maxNum)
    {
        numSums.clear();

        for (int i = 1; i <= maxNum; ++i)
        {
            NumAndSumDivisors numSum;
            numSum.num = i;
            numSum.sumOfDivisors = getSumOfDivisors(i);

            numSums.push_back(numSum);
        }
    }

public:
    std::deque<NumAndSumDivisors> getNumSumsUntil(const int maxNum)
    {
        calcNumSums(maxNum);

        return numSums;
    }

    int getSumOfDivisors(const int num)
    {
        std::deque<int> divs = getDivisors(num);

        int sum = 0;
        for(const auto & div : divs)
        {
            sum += div;
        }

        return sum;
    }

    std::deque<int> getDivisors(const int num)
    {
        std::deque<int> divs = {1};

        int upperLimit = static_cast<int>(std::sqrt(num));

        for (int i = 2; i <= upperLimit; i++)
        {
            if ((num % i) == 0)
            {
                divs.push_back(i);

                if (num / i != i)
                {
                    divs.push_back(num / i);
                }
            }
        }
        std::sort(divs.begin(), divs.end());
        return divs;
    }
};

#endif // DIVISORS_H