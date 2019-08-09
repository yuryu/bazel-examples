#include "gtest/gtest.h"
#include "../hello-time.h"

TEST(hello_time_test, get_localtime_test)
{
  EXPECT_EQ(get_localtime(1565322675), std::string("2019-08-09 03:51:15"));
} 
