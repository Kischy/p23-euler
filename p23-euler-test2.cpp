#include <gmock/gmock.h>

TEST(SecondTest, TEST)
{
    ASSERT_THAT(1, testing::Eq(2));
}

