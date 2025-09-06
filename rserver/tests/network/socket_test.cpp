#include <gtest/gtest.h>

#include "network/socket.h"

// Demonstrate some basic assertions.
TEST(SocketTest, BasicAssertions) 
{
    rserver::sayHello();
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}
