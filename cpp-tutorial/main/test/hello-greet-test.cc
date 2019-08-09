#include "gtest/gtest.h"

#include "../hello-greet.h"

TEST(hello_greet_test, empty_string)
{
  EXPECT_EQ(get_greet(""), std::string("Hello "));
}

TEST(hello_greet_test, with_name)
{
  EXPECT_EQ(get_greet("abc"), std::string("Hello abc"));
}
