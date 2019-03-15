#include <headeronly.h>
#include <gtest/gtest.h>

TEST(HeaderOnly, function_returns_99)
{
    EXPECT_EQ(99, headeronly_func_returning_99());
}
