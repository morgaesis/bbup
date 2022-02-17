#include "gtest/gtest.h"
#include "hello.h"

TEST(HelloTests, simpleHello)
{
	EXPECT_EQ(hello(), "Hello World!");
}
