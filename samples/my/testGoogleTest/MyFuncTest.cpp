#include "MyFunc.h"

#include <gtest/gtest.h>

TEST(MyMathTest, Positive333)

{

	EXPECT_EQ(33, add(1, 2));

}

TEST(MyMathTest, Positive3)

{

	EXPECT_EQ(3, add(1, 2));

}