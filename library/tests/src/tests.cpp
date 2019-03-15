#include <mylib.h>
#include <gtest/gtest.h>

TEST(MyLib, function_returns_0)
{
    EXPECT_EQ(0, mylib_func_returning_0());
}

TEST(MyLib, version_is_1_0_0)

{
    EXPECT_STREQ("1.0.0", mylib_version());
}
