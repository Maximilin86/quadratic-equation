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
