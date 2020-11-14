#include <iostream>

using namespace std;

#include "NonTwoAbundantSumNumber.hpp"



int main()
{
    cout << "Calculation started" << endl;

    NonTwoAbundantSumNumbers ntasn;

    std::deque<int> ntasn_nums = ntasn.getNonTwoAbundantSumNumbers(28123);

    int answer_p23 = 0;

    for(auto const num : ntasn_nums)
    {
        answer_p23 += num;
    }


    cout << "The answer to problem 23 of project Euler is " << answer_p23 << "." << endl;
}

