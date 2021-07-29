#include <gtest/gtest.h>
#include "lib/example.hpp"

TEST(TEST, add)
{
    GTEST_ASSERT_EQ(2, add(1, 1));
}

int test(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}