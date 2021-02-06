#include <gtest/gtest.h>
#include "example.hpp"

TEST(TEST, add)
{
    GTEST_ASSERT_EQ(1, add(1, 1));
}

int test(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}