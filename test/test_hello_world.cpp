#include <gtest/gtest.h>
#include <string>

#include "../src/hello_world.cpp"

TEST(GetGreetingTest, ReturnsCorrectGreeting) {
  std::string name = "Alice";
  std::string expected_greeting = "Hello, Alice!";
  EXPECT_EQ(get_greeting(name), expected_greeting);
}

