#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(solutionSquareEquation, test1)
{
    double *result = solutionSquareEquation(1,2,1);
    EXPECT_EQ(result[0], -1);
    /*ASSERT_THAT(0, Eq(0)); */
}
TEST(solutionSquareEquation, test2)
{
    double *result = solutionSquareEquation(2,5,2);
    //double a[2] = {-3,1};
    EXPECT_EQ(result[0], -3);
    EXPECT_EQ(result[1], 1);
    /*ASSERT_THAT(0, Eq(0)); */
}
TEST(solutionSquareEquation, test3)
{
    double *result = solutionSquareEquation(1,1,1);
    //double a[2] = {-3,1};
    EXPECT_EQ(result, nullptr);
    /*ASSERT_THAT(0, Eq(0)); */
}
